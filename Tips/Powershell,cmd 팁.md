# Powershell & cmd 팁
## 삭제
- 특정 문자열이 들어간 폴더 및 폴더 내 파일들까지 전부 삭제
    - 예
        ```ps1
        Get-ChildItem "D:\" -Directory | Where-Object {$_.Name -match '^SVN'} | Remove-Item -Force -Recurse
        ```
        - 출처
            - stackoverflow.com/questions/38141528
            - community.spiceworks.com/topic/2297256 (archive.is/lbApg)
                - han.gl/lWrCz (archive.is/oW6tk)
            - han.gl/qQvmJ (itechguides.com)
    
## 복사
- copy, robocopy 이용
    - 터미널 > `copy C:\Temp\*.jpg C:\Temp\TEST1`
    - 터미널 > 이미 있는 파일은 건너뛰기
        - 복사 방향 : RD_REPORT → RD_REPORT_haenream_221207
            ```ps1
            robocopy /e /xc /xn /xo /nfl /mt "C:\Temp" "C:\Temp\TEST1"`
            ```
            - /e : 비어 있는 폴더를 포함한 하위 폴더까지 복사
            - /xc : exclude changed
            - /xn : exclude newer
            - /xo : exclude older
            - /nfl : No File List - 파일 이름 로깅 해제
            - /mt : 멀티스레드 사용 (기본값 8)
            - 참고
                - stackoverflow.com/questions/25916197
                - stackoverflow.com/questions/3898127
        - 복사 방향 : RD_REPORT_haenam_221207 → RD_REPORT
            ```ps1
            robocopy /e /xc /xn /xo /nfl /mt "C:\Temp" "C:\Temp\TEST1"
            ```
    - 단일 파일 복사
        ```ps1
        robocopy /xc /xn /xo /nfl "Y:\자료실\" "D:\Tools\_Download" winx64_12201_client.zip
        ```
        - frompath, topath, filename 순