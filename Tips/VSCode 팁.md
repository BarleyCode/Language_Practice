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
  
- 터미널에 한글 깨지지 않게 출력하기
    - https://reo91004.tistory.com/126
    - Code-Runner 확장 설치
    - 설정 > `code-runner.ExecutorMap` 검색
    - 원하는 언어 앞에 `chcp 65001 &&` 붙이기
    - Python의 경우 시스템 환경 변수 편집에 아래와 같이 추가
        - 참고: https://reo91004.tistory.com/2
        - 변수 이름: PYTHONIOENCODING
        - 변수 값: utf-8

- git 콘솔에서 한글 깨지지 않게 출력하기
    - https://velog.io/@im-yeobi/git-%ED%95%9C%EA%B8%80-%ED%8C%8C%EC%9D%BC%EB%AA%85-%EA%B9%A8%EC%A7%90-%ED%95%B4%EA%B2%B0
    - `git config core.quotepath false` 입력