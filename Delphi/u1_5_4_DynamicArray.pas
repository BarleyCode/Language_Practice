unit u5_4_DynamicArray;

// 5.5 동적 배열 연습

interface
var
  a : array of string;
  b : array of array of string;
  country_string : string;
  i : integer;

type
  // var 선언은 콜론인데 type 선언은 등호(=)...
  country = array[0..2] of string;
var
  countries : country;

implementation

initialization
(* 할당된 정적 배열 Countries에 초기값 assign *)
begin
  countries[0] := 'Korea';
  countries[1] := 'Japan';
  countries[2] := 'etc';

  // a값에 대한 공간을 2칸 생성
  SetLength(a,2);

  // b값에 대한 공간을 4칸 생성 : (0,0), (0,1), (1,0), (1,1)
  SetLength(b,2,2);

  a[0] := 'a';
  b[0,0] := 'b';

  Writeln(a[0]);

  // for문을 이용해 배열의 모든 원소 출력
  for country_string in countries do
    WriteLn(country_string);

  // for문 한번 더!
  for i := 0 to 2 do
    WriteLn(countries[i])




end;

end.
