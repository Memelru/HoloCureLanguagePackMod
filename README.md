# 홀로큐어 언어팩 모드
홀로큐어에서 언어팩을 사용할 수 있게 만들어주는 모드입니다. 또한 모든 언어를 지원하기 위해 .ttf 파일을 사용할 수 있습니다.
## 설치 방법
1. 최신버전의 `HoloCureLanguagePackMod.dll` 파일과 `CallbackManagerMod.dll` 파일을 https://github.com/Memelru/HoloCureLanguagePackMod/releases 에서 다운로드합니다.</br></br>
2. 최신버전의 `AurieManager.exe` 파일을 https://github.com/AurieFramework/Aurie/releases 에서 다운로드합니다.
    - 참고: `AurieManager.exe` 파일이 바이러스 백신에 의해 트로이 목마로 감지될 수 있습니다. YYToolkit은 오픈소스이며, 여러 모딩 커뮤니티에서 문제 없이 사용되고 있습니다.</br></br>
3. `AurieManager.exe` 를 실행하고, 우측 상단에 `Add Game`을 클릭하여 `HoloCure.exe` 파일을 선택해주세요.
    - `HoloCure.exe` 파일은 Steam에서 `라이브러리` - `HoloCure 우클릭` - `로컬 파일 탐색` 메뉴를 클릭해서 찾을 수 있습니다.</br></br>
4. `CallbackManagerMod.dll` 파일과 `HoloCureLanguagePackMod.dll` 파일을 복사하여, 홀로큐어 설치 폴더의 `mods/Aurie` 폴더에 붙여 넣어주세요.</br></br>
5. 게임 폴더에서 `HoloCure.exe` 파일을 열거나, Steam에서 홀로큐어를 실행하는 방법으로 모드와 함께 게임을 실행할 수 있습니다.
    - **주의: `AurieManager.exe` 프로그램의 `Play Game`으로 홀로큐어를 실행하면 올바르게 켜지지 않을 수 있습니다.**
    - **주의: `AurieManager.exe` 프로그램의 `Play Game`으로 홀로큐어를 실행하면 올바르게 켜지지 않을 수 있습니다.**</br></br>

## 설치 및 실행 문제 해결
### Q. `AurieManager.exe` 또는 `AurieLoader.exe` 파일이 바이러스로 감지됩니다. 위험한거 아닌가요?
A. 인증서로 인증되지 않았기 때문에 생기는 문제입니다. 프로그램 자체는 문제없이 사용되고 있으며, 사용되는 코드는 https://github.com/AurieFramework 에서 확인이 가능합니다.</br></br>
### Q. `YYToolkit Log` 라는 창이 열렸는데 홀로큐어가 안켜져요.
A. 홀로큐어에 모드를 적용하기 위해 필요한 작업을 진행하는 중입니다. 조금만 더 기다려주세요...</br></br>
### Q. `YYToolkit Log` 창에서 기다렸는데 그냥 창만 꺼져요.
A. `AurieManager.exe`에서 `Play Game`으로 실행하지는 않았는지 확인해주세요. 홀로큐어 실행파일을 직접 열거나, Steam에서 실행해야 정상적으로 실행됩니다.</br></br>
### Q. `YYToolkit Log` 창이 한번 뜨고 다시 꺼졌다가 켜졌어요. (그 다음에는 정상실행)
A. 홀로큐어가 Steam 버전이고, 홀로큐어 실행파일을 직접 열었을때 생기는 증상으로, 정상입니다. 게임에서 Steam으로 실행되지 않았다고 판단되면 자동으로 Steam에서 재실행되는 코드가 있기 때문입니다.</br></br>
### Q. 위에 해당되는 `YYToolkit Log` 관련 증상이 없고, 그냥 cmd창만 뜨고 아무 반응없이 꺼져요.
A. 다음 URL에서 최신버전의 Visual C++ 재배포 가능 패키지(X64 아키텍쳐 전용)를 설치해주세요. https://learn.microsoft.com/ko-kr/cpp/windows/latest-supported-vc-redist?view=msvc-170#latest-microsoft-visual-c-redistributable-version </br></br>
### Q. Steam에서 실행 파일 누락이라는 오류가 떠요. (무결성검사, 게임 재설치를 해도 똑같아요)
A. 실행과정 중 `AurieLoader.exe`를 찾지 못하면 홀로큐어가 실행을 실패하여 내뿜는 오류입니다. 일반적으로 컴퓨터의 백신 프로그램이 `AurieLoader.exe`를 바이러스로 판단하고, 파일을 지우거나, 차단해서 생길 수 있습니다. 아래의 예시로 차단된 `AurieLoader.exe`를 허용 및 복구해주세요.</br></br>
예시) Windows 보안 -> 보호 기록 -> `위협 차단됨` 항목 눌러서 확인하기 -> `AurieLoader.exe`가 차단되었는지 확인 -> 작업 메뉴에서 허용해주기 -> 모드 재설치</br>
- `AurieLoader.exe`는 `홀로큐어 설치폴더`->`mods` 폴더에 위치해야합니다.</br>
- **재설치 이후 `AurieLoader.exe`가 `mods` 폴더에 없으면 https://github.com/AurieFramework/Aurie/releases 에서 최신버전의 `AurieLoader.exe`를 다운로드하고 해당 위치로 옮겨주세요.**</br></br>
### Q. Steam에서 홀로큐어를 제거할 수 없어요.
A. `AurieManager.exe`에서 홀로큐어 실행파일을 추가/선택하고 `Uninstall Aurie` 버튼을 눌러 완전히 제거해주세요. 그 다음, 게임 제거를 다시 시도해주세요.</br></br>

## 언어팩 추가하기
모드가 설치된 상태로 게임이 실행되면, `HoloCure.exe` 가 위치한 폴더에 `LanguagePacks` 폴더가 생성됩니다. 해당 폴더에 언어팩과 .ttf 파일을 넣어주세요.
## 언어팩 제작하기
Create a file in the format of `fileName.lang`. Whatever you put as `fileName` will show up as the language name in game. The first line of the file must either be `NONE` or the name of the ttf file you will be using.
Each line after that will be assigning the text you want in the game. The text you put in must be either an array of strings or a string, and it should match the type of whatever was originally there to not crash the game.

For example, to replace the text for the title buttons, you would have it in the format `titleButtons ["Play", "Holo House", "Shop", "Leaderboard", "Achievements", "Settings", "Credits", "Quit"]`, and replacing the text for half angel will be in the format `HalfAngelName "Half Angel"`.
Each different mapping must be on its own line in the previously mentioned format. `TextContainer.out` will be created whenever the game runs with the mod installed which you can use to create your own language pack.

Some text might not be in the text container due to it being hard coded into the game. In those cases, you can use the direct mapping feature which will be in the format `"HP" "testHP"`. It must be exactly the same as the text you want to replace which includes capitalization.
## Original Repositiory
https://github.com/PippleCultist/HoloCureLanguagePackMod
