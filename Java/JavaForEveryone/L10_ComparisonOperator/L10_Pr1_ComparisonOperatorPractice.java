package L10_ComparisonOperator;
/*
 * 문제 : 변수 a,b는 int형 변수입니다.
 * 각각 어떤 값을 가졌는지 비교하기 전에는 모릅니다.
 * a,b가 주어졌다 가정하고 문제를 풀어보세요.
 */


public class L10_Pr1_ComparisonOperatorPractice {
    public void calculate(int a, int b) {
        boolean c = (a > b);
        boolean d = (a == b);
        boolean e = (a != b);

        System.out.println(a+"은(는) " + b + "보다 큽니까? " + c);
        System.out.println(a+"은(는) " + b + "와(과) 같습니까? " + d);
        System.out.println(a+"은(는) " + b + "와(과) 다릅니까? " + e);
    }

    public static void main(String[] args) {
        // 0~10 사이 값을 랜덤하게 변수 a,b에 넣는다.
        // Math.random() : 0.0~1.0 사이의 무작위 double 실수 반환
        int a = (int)(Math.random()*10);
        int b = (int)(Math.random()*10);
        new L10_Pr1_ComparisonOperatorPractice().calculate(a,b);

    }
}
