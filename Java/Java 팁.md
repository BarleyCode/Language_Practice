# Java 팁

## JetBrains IntelliJ IDEA
* 언어 설정
	- 오른쪽 톱니바퀴 메뉴 > Plugins > Korean 검색해 Korean Language Pack 제거 시 기본값인 영어로 변경
	
* JAVA_HOME 오류
	- Windows : 시스템 환경 변수 설정을 되도록이면 `D:\Tools\JetBrains\IntelliJ_IDEA\jbr\bin` 여기 경로로 설정하기
	
* 코드 변경에 따른 자동 import 옵션 켜기
	- https://atoz-develop.tistory.com/entry/JAVA-IntelliJ-IDEA-%EC%82%AC%EC%9A%A9-%ED%8C%81-Auto-import-%EC%98%B5%EC%85%98-%EC%84%A4%EC%A0%95
	- 오른쪽 톱니바퀴 메뉴 > Editor > General > Auto Import
	
### Gradle
* Gradle 오류 Could not find methond Compile()
	- https://devdavelee.tistory.com/29
	- Gradle 3.0 부터 의존 라이브러리 수정 시 재빌드가 필요한 라이브러리를 선택적으로 할 수 있도록 compile 대신 api 와 implementation 으로 나눠 필요없는 경우 재빌드 하지 않도록 했다고 한다.
	- 따라서 목적에 맞게 api 또는 implementation으로 작성하는것이 권장되겠다.
 
	- implementation : 의존 라이브러리 수정시 본 모듈까지만 재빌드. 본 모듈을 의존하는 모듈은 해당 라이브러리의 api 를 사용할 수 없음
 
	- api : 의존 라이브러리 수정시 본 모듈을 의존하는 모듈들도 재빌드. 본 모듈을 의존하는 모듈들도 해당 라이브러리의 api 를 사용할 수 있음
	- 결론 : 혹시나 책에서 compile, testCompile이 있으면 implementation, testImplementation으로 바꿔주기