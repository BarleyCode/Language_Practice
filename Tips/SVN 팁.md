# SVN 팁 - TortoiseSVN 기준
## 기본
- 기본 (체크아웃, 업데이트, 커밋, 임포트)
    - ymmedia.tistory.com/177   
- 연결하기
    - 내 컴퓨터에서 원하는 위치에 폴더 만들기
	- 오른쪽 마우스 > TortoiseSVN > SVN 체크아웃
	(참고 : 체크인 = git commit, 체크아웃 = git clone인듯)
- 연결 끊기
	- .svn (숨김 폴더) 삭제 (copycd.tistory.com/15)
- 임포트(import)
	- SVN 서버의 저장소에 아무 데이터도 저장되어 있지 않은 상태에서 처음으로 파일을 업로드하는 경우 사용
	- vo.la/NiU1zv
- 상태 업데이트하기
	- 원하는 파일/폴더에서 오른쪽 마우스 > TortoiseSVN > Clean Up(정리) > Refresh shell overlays(오버레이 새로고침) 체크 > 확인
- 특정 파일 제외
    - 해당 파일이 위치한 폴더를 우클릭 > TortoiseSVN > 속성 > 새로 만들기 > 다른 것(Others)
    - 속성 이름 : svn:ignore
    - 기본값 (설정 > 일반 > Subversion > 제외/무시 패턴)
        ```
        *.o *.lo *.la *.al .libs *.so *.so.[0-9]* *.a *.pyc *.pyo __pycache__ *.rej *~ #*# .#* .*.swp .DS_Store [Tt]humbs.db
        ```
    - 델파이 권장 이그노어 패턴
        ```
        *.o *.lo *.la *.al .libs *.so *.so.[0-9]* *.a *.pyc *.pyo __pycache__ *.rej *~ #*# .#* .*.swp .DS_Store *.dcu *.res *.stat *.identcache *.local *.dcp __history __recovery *.zip
        ```
    - 여러 파일을 넣으려면 그냥 엔터로 구분하면 된다.
        - 아니면 파일 선택 후 우클릭 > TortoiseSVN > 무시 목록에 추가 선택
    - '속성을 재귀적으로 적용' 옵션 : 하위 폴더 내의 파일까지 전부 제외한다.
- 커밋
    - 우클릭 > TortoiseSVN > add(추가하기) > 체크 모두 해제 후 원하는 파일만 체크
    - 이 때 폴더도 함께 체크
        - 예 : TEST 폴더와 그 안에 있는 파일들을 커밋하고 싶다면...
            - TEST 이 폴더도 꼭 체크하기

-----------------
## TortoiseSVN
- 배치(bat) 파일로 자동 업데이트 및 오버레이 수정
    ```bat
    @echo off
    REM Source : mugrammer.tistory.com/166

    "D:\Tools\TortoiseSVN\bin\TortoiseProc.exe" /command:update /path:"C:\DIR1*C:\DIR2*C:\DIR3" /closeonend:1
    "D:\Tools\TortoiseSVN\bin\TortoiseProc.exe" /command:cleanup /path:"C:\DIR1*C:\DIR2*C:\DIR3" /noui /nodlg /refreshshell /closeonend:1

    ```
    - 여러 디렉터리 업데이트 시 와일드카드(*)문자로 구분
    - 참고
        - mugrammer.tistory.com/166
        - stackoverflow.com/questions/2657011