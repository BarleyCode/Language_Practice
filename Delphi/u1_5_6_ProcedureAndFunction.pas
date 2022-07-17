unit u1_5_6_ProcedureAndFunction;
// 1.5.6 ���ν����� �Լ� ����

(*
  1. Call by value
    - ������ �� ���� = �Լ� �ȿ��� �Ѿ�� ���� �� ���� �Ұ�
    Procedure Add(x,y : integer);

  2. Call by reference
    - ������ �޸� ��ġ�� ���ν����� ����
    - ���� �� ���� ����
    Procedure ReadData(Var Rec : string);

  3. Call by const
    - ����� �Ű� ���� ����.
    - ���ν��� ������ ���� �� ���� �Ұ�. ������ ����.
    Procedure WriteData(Const A : string);

  4. ��� �Ķ����
    - Out �Ķ���Ϳ��� �����Ǵ� ������ �ʱⰪ : ��ƾ���� ���� �� ���� ������
    - ȣ�� �� �Ѿ�� �Է� ������ �˷����� ����.
    - �Լ�/���ν��� ���� �� � ���� ������ �� ���
    Procedure Writedata(Out a: string);

  5. �����ε�
    - ���� �̸����� 1�� �̻��� ���ν���/�Լ� ���� ����
    Function divide(x,y : integer) : integer, Overload;

*)


interface

// ShowMessage ������ ���� �ʿ�
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

// �����ε带 ����Ϸ��� �׻� �ڿ� Overload ���̱�
function divide(x,y : integer) : integer; Overload;
function divide(x,y : real) : real; Overload;

implementation

// implemetation���� ���ν����� �����ؾ� �Ѵ�.
procedure testProc;
  var k : integer;

  begin
    ShowMessage('Hello');
  end;

// x/y ������ (������)
function divide(x,y : integer) : integer;
begin
  Result := x div y;
end;

// x/y ������ (�Ǽ���)
function divide(x,y : real) : real;
begin
  Result := x/y;
end;



initialization

// ���ν����� ����Ϸ��� initialization �ȿ� ���´�.
// �Ű������� ������ �Ʒ�ó�� �̸��� �ᵵ �ȴ�!
testProc;

writeln(divide(6,3));
// writeln('6/3 : ' + divide(6,3)) �̷��� ���� string�� int�� ���� �޶�
// ���ڿ��� ������ �� ���ٰ� ���...



end.
