# Delphi
* 책 : 델파이 Begin..End
* 코드가 있는 항목만 작성
* 콘솔에 결과 출력하기 : Project에서 `{$APPTYPE CONSOLE}` 입력
	* 콘솔만 나올 시 창이 바로 꺼질 수 있으니 폼 생성 등으로 자동 꺼짐 방지하기
* 문자셋 변경 (UTF-8)
	* reg 파일 생성 후 아래와 같이 작성. (버전은 IDE마다 상이)
	```
	Windows Registry Editor Version 5.00

	[HKEY_CURRENT_USER\Software\Embarcadero\BDS\20.0\Editor]
	"DefaultFileFilter"="Borland.FileFilter.UTF8ToUTF8"
	```
	* https://tech.devgear.co.kr/delphi_qna/450604
	* https://stackoverflow.com/questions/1736102/how-can-i-set-the-default-file-format-in-the-delphi-ide-to-utf8
## 1장 델파이로 프로젝트 시작하기
### 1.5. 유닛 소스 코딩하기
* 1.5.3 변수 선언 : u1_5_3_VariableDeclaration.pas
	* 1.5.4 내용 일부 포함
* 1.5.4 배열 선언
	* 동적 배열 : u1_5_4_DynamicArray.pas
* 1.5.5 변수 선언 : u1_5_5_RecordDeclaration.pas
* 1.5.6 프로시저와 함수 선언 : u1_5_6_ProcedureAndFunction.pas
* 1.5.7 연산자
* 1.5.8 클래스 작성 : u1_5_8_Class.pas


