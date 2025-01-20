# 홀로큐어 언어팩 모드
홀로큐어에서 언어팩을 사용할 수 있게 만들어주는 모드입니다. 또한 모든 언어를 지원하기 위해 .ttf 파일을 사용할 수 있습니다.
## 설치 방법
1. 최신버전의 `HoloCureLanguagePackMod.dll` 파일과 `CallbackManagerMod.dll` 파일을 https://github.com/Memelru/HoloCureLanguagePackMod/releases 에서 다운로드합니다.
2. 최신버전의 `AurieManager.exe` 파일을 https://github.com/AurieFramework/Aurie/releases 에서 다운로드합니다.
    - 참고: `AurieManager.exe` 파일이 바이러스 백신에 의해 트로이 목마로 감지될 수 있습니다. YYToolkit은 오픈소스이며, 여러 모딩 커뮤니티에서 문제 없이 사용되고 있습니다.
3. `AurieManager.exe` 를 실행하고, 우측 상단에 `Add Game`을 클릭하여 `HoloCure.exe` 파일을 선택해주세요.
    - `HoloCure.exe` 파일은 Steam에서 `라이브러리` - `HoloCure 우클릭` - `로컬 파일 탐색` 메뉴를 클릭해서 찾을 수 있습니다.
4. `CallbackManagerMod.dll` 파일과 `HoloCureLanguagePackMod.dll` 파일을 복사하여, 홀로큐어 설치 폴더의 `mods/Aurie` 폴더에 붙여 넣어주세요.
5. 게임 폴더에서 `HoloCure.exe` 파일을 열거나, Steam에서 홀로큐어를 실행하는 방법으로 모드와 함께 게임을 실행할 수 있습니다.
    - `AurieManager.exe` 프로그램의 `Play Game`으로 홀로큐어를 실행하면 올바르게 켜지지 않을 수 있습니다.
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
