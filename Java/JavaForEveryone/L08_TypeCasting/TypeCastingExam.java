package L08_TypeCasting;
// 문제 : 빈칸에 long형 변수 longValue 선언, intValue에 들어있는 값 담기

public class TypeCastingExam {
    public static void main(String[] args) {
        // 묵시적(암묵적) 형변환
        int x = 50000;
        long y = x;
        System.out.println("y : " + y);

        // 명시적(강제적) 형변환
        long x2 = 5;
        int y2 = (int)x2;
        System.out.println("y2 : " + y);
    }

}
