unit u5_3_VariableDeclaration;
(*
  - 5.3 ���� ����
  - 5.4 �迭 ����
*)

interface
var
  i : integer;
  s : string;

// ���� �迭 : 0~2������ ������ ������ ���� �迭 ����
type
  Country = array[0..2] of string;


var
  Countries : Country;

implementation
var
  j : integer;

  // ���� �迭
  A, B : array of integer;

initialization
// �Ҵ�� ���� �迭 Countries�� �ʱⰪ Assign
begin
  Countries[0] := 'Korea';
  Countries[1] := 'Japan';
  Countries[2] := 'Etc';
  writeln('Delphi Test');
  WriteLn(Countries[0]);

  // ���� �迭�� SetLength ���ν����� �̿��� �Ҵ�
  SetLength(A, 1);
  A[0] := 1;
  B := A;
  B[0] := 2;

end;

end.
