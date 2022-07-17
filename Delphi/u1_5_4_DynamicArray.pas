unit u5_4_DynamicArray;

// 5.5 ���� �迭 ����

interface
var
  a : array of string;
  b : array of array of string;
  country_string : string;
  i : integer;

type
  // var ������ �ݷ��ε� type ������ ��ȣ(=)...
  country = array[0..2] of string;
var
  countries : country;

implementation

initialization
(* �Ҵ�� ���� �迭 Countries�� �ʱⰪ assign *)
begin
  countries[0] := 'Korea';
  countries[1] := 'Japan';
  countries[2] := 'etc';

  // a���� ���� ������ 2ĭ ����
  SetLength(a,2);

  // b���� ���� ������ 4ĭ ���� : (0,0), (0,1), (1,0), (1,1)
  SetLength(b,2,2);

  a[0] := 'a';
  b[0,0] := 'b';

  Writeln(a[0]);

  // for���� �̿��� �迭�� ��� ���� ���
  for country_string in countries do
    WriteLn(country_string);

  // for�� �ѹ� ��!
  for i := 0 to 2 do
    WriteLn(countries[i])




end;

end.
