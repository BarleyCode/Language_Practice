unit u5_3_VariableDeclaration;
(*
  - 5.3 변수 선언
  - 5.4 배열 선언
*)

interface
var
  i : integer;
  s : string;

// 정적 배열 : 0~2까지의 공간을 가지는 정적 배열 지정
type
  Country = array[0..2] of string;


var
  Countries : Country;

implementation
var
  j : integer;

  // 동적 배열
  A, B : array of integer;

initialization
// 할당된 정적 배열 Countries에 초기값 Assign
begin
  Countries[0] := 'Korea';
  Countries[1] := 'Japan';
  Countries[2] := 'Etc';
  writeln('Delphi Test');
  WriteLn(Countries[0]);

  // 동적 배열은 SetLength 프로시저를 이용해 할당
  SetLength(A, 1);
  A[0] := 1;
  B := A;
  B[0] := 2;

end;

end.
