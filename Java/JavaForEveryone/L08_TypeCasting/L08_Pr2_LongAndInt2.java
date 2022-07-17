package L08_TypeCasting;
// 문제 : int형 변수 intValue 선언, longValue에 들어 있는 값 담기

public class L08_Pr2_LongAndInt2 {
    public static void main(String[] args) {
        long longValue = 20;
        int intValue = (int)longValue;
        System.out.println("intValue : " + intValue);
    }
}
