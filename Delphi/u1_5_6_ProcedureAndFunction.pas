unit u1_5_6_ProcedureAndFunction;
// 1.5.6 프로시저와 함수 선언

(*
  1. Call by value
    - 복사한 값 전달 = 함수 안에서 넘어온 변수 값 변경 불가
    Procedure Add(x,y : integer);

  2. Call by reference
    - 변수의 메모리 위치를 프로시저에 전달
    - 변수 값 변경 가능
    Procedure ReadData(Var Rec : string);

  3. Call by const
    - 상수로 매개 변수 전달.
    - 프로시저 내에서 변수 값 변경 불가. 참조만 가능.
    Procedure WriteData(Const A : string);

  4. 출력 파라미터
    - Out 파라미터에서 참조되는 변수의 초기값 : 루틴으로 전달 시 값이 없어짐
    - 호출 시 넘어온 입력 정보는 알려주지 않음.
    - 함수/프로시저 실행 후 어떤 값을 전달할 때 사용
    Procedure Writedata(Out a: string);

  5. 오버로드
    - 같은 이름으로 1개 이상의 프로시저/함수 선언 가능
    Function divide(x,y : integer) : integer, Overload;

*)


interface

// ShowMessage 실행을 위해 필요
uses Dialogs;

type
  Country = array[0..2] of string;

var
  i : integer;
  s : string;
  a : array of string;
  b : array of array of string;
  countries : country;

procedure testProc;

// 오버로드를 사용하려면 항상 뒤에 Overload 붙이기
function divide(x,y : integer) : integer; Overload;
function divide(x,y : real) : real; Overload;

implementation

// implemetation에도 프로시저를 구현해야 한다.
procedure testProc;
  var k : integer;

  begin
    ShowMessage('Hello');
  end;

// x/y 나누기 (정수형)
function divide(x,y : integer) : integer;
begin
  Result := x div y;
end;

// x/y 나누기 (실수형)
function divide(x,y : real) : real;
begin
  Result := x/y;
end;



initialization

// 프로시저를 사용하려면 initialization 안에 놓는다.
// 매개변수가 없으면 아래처럼 이름만 써도 된다!
testProc;

writeln(divide(6,3));
// writeln('6/3 : ' + divide(6,3)) 이렇게 쓰면 string과 int는 형이 달라서
// 문자열을 연결할 수 없다고 뜬다...



end.
