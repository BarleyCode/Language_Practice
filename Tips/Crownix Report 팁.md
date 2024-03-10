# Crownix Report 팁
- 오라클 DB와 연결하기
    - 데이터 소스 → 데이터베이스 접속
    - 데이터 서버 경로 : (URL 주소)

- DB 값과 연결하기
    - 텍스트 상자 등 도형 생성 → 도형 선택 (추천 : '보고서 탐색기' 메뉴에서 직접 선택하기)
    - 상단 '데이터 소스' 메뉴 → 데이터셋 연결 → 필드 리스트에서 필드명 선택
    - 필드를 만들고 싶다면 해당 보고서에 적용되는 패키지 찾아 직접 칼럼 추가

- 글꼴 크기 고정 해제
    - 맞추기 > 텍스트 상자 속성 > '글꼴 크기 고정' 속성 해제

- 표
    - 선 투명하게 설정 : 선 굵기를 0으로 설정
        - 표 > 선 선택 > 선 전체 선택 또는 선 일부 선택 클릭 > 선 선택
        - 홈 > 선 두께 > 0으로 설정
    - 참고: vo.la/YiQS5 (archive.is/d4NRC)

- 파라미터 값 입력 : `/rv PARAM[46820] /ruseswapdisk /rspeeduponepagerpt /rswapfilepage[300] /rlobopt[0]`

## Report Viewer 팁
- standalone/portable로 이용하기
    - 다음 파일 필요 
        - cxviewer.exe
        - cxagent.dll
        - cxresmgr.dll
        - cxviewer.resource.ko.dll
        - 이 4개가 같은 위치에 있어야 한다.

- 보고서 작동 테스트
    - powershell/cmd 명령어
        ```ps1
        # 집계표가 보고서 양이 적어 테스트하기 적합
        .\cxviewer.exe /p "1234.mrd" /rv SREG[43760] /rsavepagesize [300] /rsavepdf [C:\Users\USER\Downloads\result.pdf]

        # 보고서 양이 매우 많을 경우 /rpagelimit로 적절한 위치에서 커트
        .\cxviewer.exe /p "1234.mrd" /rv SREG[46820] BINZIP_YN[3] /rsavepagesize [300] /ruseswapdisk /rspeeduponepagerpt /rswapfilepage [300] /rpagelimit [10] /rsavepdf [C:\Users\USER\Downloads\test1.pdf]

        ```
    - /p : 인쇄. /rsavepdf와 함께 쓰면 자동으로 PDF로 저장

### 파라미터
- /ruseswapdisk : 메모리 스왑 대신 하드디스크 스왑을 실시한다
	- 보통 보고서 생성 시 메모리에서 스왑하는데 메모리 점유 용량이 최대 2GB (실제로는 1.5GB) 이상이면 뻗는다...

- '쿼리 정의' 메뉴에서 저장 프로시저에 나오는 파라미터가 실제 프로시저의 파라미터와 불일치
    - '쿼리를 실행하여 컬럼명 가져오기' 체크박스 누르고 다시 검색
