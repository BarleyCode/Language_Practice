# Visual Studio Code 팁

- 탭 설정
    - File > Settings > Indentation 검색 후 Editor:Tab Size = 4로 변경
    - Editor : Detect Indentation 비활성화(체크박스 해제)
        - https://tttsss77.tistory.com/63
    - 다시, File > Settings > Markdown > Extension > List: Indentation Size 옵션 = inherit로 설정한다.
        - 그래야 tab size 4를 그대로 상속받을 수 있다.
    - Markdown-all-in-one 확장이 설치되었을 때
        - https://stackoverflow.com/questions/69599919
        - Settings > `markdown.extension.list.indentationSize` 검색 > `inherit` 으로 변경
  
- 터미널을 현재 디렉터리에 열기
    - https://stackoverflow.com/questions/43305050
    - 설정 > `terminal.integrated.cwd` 검색
    - 빈 칸에 `${fileDirname}` 입력