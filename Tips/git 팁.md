# git 팁

- git으로 올려보기(add, commit, push까지)
    - https://velog.io/@suasue/Git-Git-%EC%B4%88%EA%B8%B0-%EC%84%B8%ED%8C%85-%EB%B0%8F-add-commit-push-%ED%95%B4%EB%B3%B4%EA%B8%B0
    - `git remote -v` : remote repository와 연결 확인
    - `git status`: 상태 확인
    - `git add .`: 파일 추가 희망 시 사용. `.`은 현재 디렉터리의 모든 파일을 add한다는 뜻
    - `git commit -m "코멘트"`: 커밋 단계. 반드시 add 이후에 실시. 코멘트 입력 시 `-m` 활용
    - `git push origin main` : 푸쉬 단계. 반드시 commit 이후에 실시. main 브랜치로 push할 것
        - `-u`: 이 파라미터를 추가할 시 자동으로 해당 브랜치에 push, pull 등 실시
        - 예: `git push -u origin main` > 다음부터 `git push`만 입력해도 자동으로 main으로 push
    - `git pull origin main` : 풀 단계. 데이터 갱신

- 로컬 저장소 변경
    - 레포지토리 내 .git 폴더를 옮기면 된다 (https://sedangdang.tistory.com/147)
        - 아카이브 : https://archive.ph/n1LJd

- 실수로 .idea 디렉터리 등을 잘못 올렸을 때
    - Ctrl+Shift+A로 Action > Terminal 검색
    - 터미널 실행 후 repository에서 시작하는지 확인 (아니라면 이동)
    - `git rm --cached -r .idea/` 실행
        - https://stackoverflow.com/questions/35122376/how-can-i-remove-a-file-from-git-within-intellij-vcs
    - `git commit -m "Fixed untracked files"` → 코멘트는 자유롭게 입력
    - `git push origin master`
        - https://gmlwjd9405.github.io/2018/05/17/git-delete-incorrect-files.html

- 이미 올려졌을 경우 history 삭제 및 재커밋
    - git log를 통해 복구를 원하는 지점 탐색
    - 리셋하기
        - https://fierycoding.tistory.com/40
        - `git reset --hard 41e003f04d620aea09cf2d89e27ff255af56c03d // 돌아가고자 하는 지점의 commit`
        - 이때, 저 해시값(?)으로 돌아간다! 저 지점까지 삭제가 아니라 저 지점으로 돌아가는 것 명심하기!!
        - force 옵션으로 github repo에 저장
            - `git push -f origin master`
            - 공유 branch라면 다른 팀원들이 삭제 대상인 commit 단계에서 작업중인지 확인하기
    - 원하는 파일 수정 후 재업로드
        - https://dkdlxl.tistory.com/entry/Github-%EC%BB%A4%EB%B0%8B-%ED%9E%88%EC%8A%A4%ED%86%A0%EB%A6%AC-%EC%82%AD%EC%A0%9C
        - `git status`로 수정된 파일 재확인
        - `git add`로 커밋 전 준비 (파일을 추가하여 commit 준비)
        - 다시 `git commit -m "커밋 메시지"`, `git push origin master`로 재업로드

    - 참고
        - https://dkdlxl.tistory.com/entry/Github-%EC%BB%A4%EB%B0%8B-%ED%9E%88%EC%8A%A4%ED%86%A0%EB%A6%AC-%EC%82%AD%EC%A0%9C
        - https://atomic0x90.github.io/github/2020/03/16/github-history-remove.html
        - https://fierycoding.tistory.com/40