#pragma once
#include <YYToolkit/shared.hpp>
#include "ModuleMain.h"

std::string safe_substr(const std::string& str, size_t start, size_t length = 18446744073709551615Ui64);
void DrawTextBefore(RValue* Result, CInstance* Self, CInstance* Other, int numArgs, RValue* Args);