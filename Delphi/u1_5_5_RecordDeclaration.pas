unit u5_5_RecordDeclaration;
(*
  5.5 ���ڵ��� ����
  - ���ڵ��� �ڷ� ����
*)

interface

type
  Country = array[0..2] of string;

Person = record
  Name : string;
  Age : integer;
  Address : string;
end;

(*
  Delphi 2007 ���� ���ķ� ���ڵ忡 �޼ҵ� ���� ��� �߰�
*)
type
  TMyRecord = record
    type
      TInnerColorType = integer;

  var
    Red : integer;
      class var
        Blue : integer;

    procedure printRed();
    constructor Create(val : integer);
    property RedProperty : TInnerColorType read Red Write Red;
    class property BlueProperty : TInnerColorType read Blue write Blue;
  end;

implementation

constructor TMyRecord.Create(val: integer);
begin
  Red := val;
end;

// ���� : Red �۾��� ������ initialization���� �������ֱ�!
procedure TMyRecord.printRed;
begin
  writeln('Red : ', Red);
end;




end.
