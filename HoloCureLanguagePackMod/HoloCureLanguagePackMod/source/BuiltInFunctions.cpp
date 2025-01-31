#include "BuiltinFunctions.h"
#include "ModuleMain.h"
#include <YYToolkit/shared.hpp>
#include "CallbackManager/CallbackManagerInterface.h"
#include "ScriptFunctions.h"
#include "CodeEvents.h"

extern bool isDebug;
extern std::vector<std::unordered_map<std::string, std::string>> languageTextSwapMap;

// 한글 텍스트를 다루는데 문제가 생기는 것을 방지하기 위해 안전하게 문자열을 자르는 함수
std::string safe_substr(const std::string& str, size_t start, size_t length) {
	size_t byte_index = 0;
	size_t char_count = 0;

	// 시작 인덱스에서 문자 단위로 이동
	while (byte_index < str.size() && char_count < start) {
		if ((str[byte_index] & 0x80) == 0) { // 1바이트 문자
			byte_index += 1;
		}
		else if ((str[byte_index] & 0xE0) == 0xC0) { // 2바이트 문자
			byte_index += 2;
		}
		else if ((str[byte_index] & 0xF0) == 0xE0) { // 3바이트 문자
			byte_index += 3;
		}
		else if ((str[byte_index] & 0xF8) == 0xF0) { // 4바이트 문자
			byte_index += 4;
		}
		char_count++;
	}

	// 잘라낼 길이가 문자열의 끝을 넘어가지 않도록 조정
	size_t start_byte_index = byte_index;
	for (size_t i = 0; i < length && byte_index < str.size(); i++) {
		if ((str[byte_index] & 0x80) == 0) {
			byte_index += 1;
		}
		else if ((str[byte_index] & 0xE0) == 0xC0) {
			byte_index += 2;
		}
		else if ((str[byte_index] & 0xF0) == 0xE0) {
			byte_index += 3;
		}
		else if ((str[byte_index] & 0xF8) == 0xF0) {
			byte_index += 4;
		}
	}

	return str.substr(start_byte_index, byte_index - start_byte_index);
}

std::string getTextSwapMapping(RValue* Args)
{
	if (Args[2].m_Kind != VALUE_STRING) // Seems like the argument could be a non string? Probably converts it under the hood to a string
	{
		return "";
	}
	std::string text = std::string(Args[2].AsString());
	if (curLanguagePackFont != -1)
	{
		auto findMapping = languageTextSwapMap[curLanguagePackFont].find(text);
		if (findMapping != languageTextSwapMap[curLanguagePackFont].end())
		{
			text = findMapping->second;
			Args[2] = text;
		}
	}
	return text;
}

void DrawTextBefore(RValue* Result, CInstance* Self, CInstance* Other, int numArgs, RValue* Args)
{
	if (curLanguagePackFont != -1)
	{
		if (isDebug) {
			std::string text = std::string(Args[2].AsString());
			g_ModuleInterface->Print(CM_WHITE, "Text: %s", text.c_str());
		}
		RValue curFont = languageFontList[curLanguagePackFont];
		getTextSwapMapping(Args);
		if (curFont.m_Kind == VALUE_UNDEFINED)
		{
			return;
		}
		g_ModuleInterface->CallBuiltin("draw_set_font", { curFont });
	}
}