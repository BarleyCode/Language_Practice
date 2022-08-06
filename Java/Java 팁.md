# Java 팁

## Java 공통
- annotation 꿀팁
    - 주요 어노테이션은 클래스에 가깝게 둔다 (꼭 필요한 어노테이션일수록 클래스 선언문 가까이에 둔다)
    - 예 : Lombok 어노테이션은 필수는 아니라서 위쪽에 둔다 → 나중에 필요 없을 떄 쉽게 삭제 가능
    
- Builder 패턴을 적극적으로 활용하기
    - Setter가 없어도 Builder를 통해 값을 채울 수 있다(DB에도 삽입 가능)
    - 예 1 : 잘못된 예. 만약 잘못해서 a,b 순서가 바뀐다면 유지보수 시 큰일이다.
        ```java
        public Example(String a, String b) {
            this.a = a;
            this.b = b;
        }
        ```
    - 예 2 : 올바른 예. 다음과 같이 어느 필드에 어떤 값을 채워야할 지 명확하게 인지 가능
        ```java
        Example.builder()
            .a(a)
            .b(b)
            .build();
        ```

## JetBrains IntelliJ IDEA
### Gradle
- Gradle 오류 Could not find methond Compile()
    - https://devdavelee.tistory.com/29
    - Gradle 3.0 부터 의존 라이브러리 수정 시 재빌드가 필요한 라이브러리를 선택적으로 할 수 있도록 compile 대신 api 와 implementation 으로 나눠 필요없는 경우 재빌드 하지 않도록 했다고 한다.
    - 따라서 목적에 맞게 api 또는 implementation으로 작성하는것이 권장되겠다.
 
    - implementation : 의존 라이브러리 수정시 본 모듈까지만 재빌드. 본 모듈을 의존하는 모듈은 해당 라이브러리의 api 를 사용할 수 없음
 
    - api : 의존 라이브러리 수정시 본 모듈을 의존하는 모듈들도 재빌드. 본 모듈을 의존하는 모듈들도 해당 라이브러리의 api 를 사용할 수 있음
    - 결론 : 혹시나 책에서 compile, testCompile이 있으면 implementation, testImplementation으로 바꿔주기

### 라이브러리
    - JDK 문제로 안 뜬다면 `openJDK`로 설치
    
### git 사용
- Commit : 좌측 메뉴 > Commit > Commit 또는 Commit and Push
- Push
    - 상단 메뉴에서 우상단(↗) 화살표 클릭
    - 단축키 Ctrl+Shift+K
    - 메뉴에 추가 : https://intellij-support.jetbrains.com/hc/en-us/community/posts/360000520760-Add-a-Git-push-button-to-the-
- 실수로 .idea 디렉터리 등을 잘못 올렸을 때
    - Ctrl+Shift+A로 Action > Terminal 검색
    - 터미널 실행 후 repository에서 시작하는지 확인 (아니라면 이동)
    - `git rm --cached -r .idea/` 실행
        - https://stackoverflow.com/questions/35122376/how-can-i-remove-a-file-from-git-within-intellij-vcs
    - `git commit -m "Fixed untracked files"` → 코멘트는 자유롭게 입력
    - `git push origin master`
        - https://gmlwjd9405.github.io/2018/05/17/git-delete-incorrect-files.html

### 플러그인
- Action 검색(Ctrl+Shift+A) 실행 > Plugin 검색
- 참고
    - Lombok 플러그인은 IntelliJ IDEA 2020.3버전부터 기본 탑재된다고 한다. (https://github.com/mplushnikov/lombok-intellij-plugin)

### 기타 설정
- 언어 설정
    - 오른쪽 톱니바퀴 메뉴 > Plugins > Korean 검색해 Korean Language Pack 제거 시 기본값인 영어로 변경
- JAVA_HOME 오류
    - Windows : 시스템 환경 변수 설정을 되도록이면 `D:\Tools\JetBrains\IntelliJ_IDEA\jbr\bin` 여기 경로로 설정하기
- 코드 변경에 따른 자동 import 옵션 켜기
    - https://atoz-develop.tistory.com/entry/JAVA-IntelliJ-IDEA-%EC%82%AC%EC%9A%A9-%ED%8C%81-Auto-import-%EC%98%B5%EC%85%98-%EC%84%A4%EC%A0%95
    - 오른쪽 톱니바퀴 메뉴 > Editor > General > Auto Import
- 자동 줄 바꿈
    - 다른 확장자 :  설정 > Editor > General > Soft-wrap these files에 해당 파일 삽입
        - 예 : `*.md`
- import 입력 시 사라지는 현상 해결
    - https://stackoverflow.com/questions/62361168/cant-add-import-into-java-class-in-intellij
    - Settings -> Editor -> General -> Auto Import -> Optimize imports on the fly 체크박스 해제

    
### 오류
- Unsupported class file major version 62
    - 숫자는 설치된 Gradle 버전에 따라 다를 수 있다.
    - Gradle 버전이 맞지 않아 생기는 오류.
    - 먼저 '스프링 부트와 AWS로 혼자 구현하는 웹 서비스'를 보면 `sourceCompatibility = 1.8`이 써진 부분이 있다. JDK 버전을 이 1.8 버전으로 맞추기
        - https://stackoverflow.com/questions/67079327/how-can-i-fix-unsupported-class-file-major-version-60-in-intellij-idea
        - 설정 > Build, Execution, Deployment > Build Tools > Gradle
        - Gradle JVM > Download JDK... > 1.8버전 아무거나 찾아서 다운로드 (회사는 상관 없음)
    - build.gradle 파일 들어가서 책과 다른 내용은 전부 삭제. 책과 __똑같이__ 만들기