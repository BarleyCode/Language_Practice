package L06_Constant;

public class ConstantExam {
    public static void main(String[] args) {
        int i;
        i = 10;
        i = 5;
        System.out.println("i : " + i);

        // 관례 : 상수는 대문자다
        final int J = 10;
        System.out.println("J : " + J);

        // 원 넓이 구하기
        double circleArea;
        circleArea = 3*3*3.14159;
        System.out.println("circleArea : " + circleArea);

        // PI를 상수로 선언 후 원 둘레 구하기
        final double PI = 3.14159;
        int radius = 3;
        double result = radius * 2 * PI;
        System.out.println("circle length result : " + result);
        
        // 기름값 구하기
        // 상수는 모두 대문자 → 단어 사이를 언더바(_)로 구분
        final int OIL_PRICE = 1450;
        int totalPrice = 50 * OIL_PRICE;
        System.out.println("Oil totalPrice : " + totalPrice);

    }
}
