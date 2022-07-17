unit u5_5_RecordDeclaration;
(*
  5.5 레코드형 선언
  - 레코드형 자료 관리
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
  Delphi 2007 버전 이후로 레코드에 메소드 포함 기능 추가
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

// 참고 : Red 글씨를 보려면 initialization에도 선언해주기!
procedure TMyRecord.printRed;
begin
  writeln('Red : ', Red);
end;




end.
