package L09_Operator;

/*
 * 문제 : 산술 연산자를 활용해 변수 a,b의 합,차,곱을 c,d,e 변수에 각각 저장하세요.
 * 그리고 변수 f에는 a를 b로 나눈 나머지를 저장하세요.
 */

public class L09_Pr1_OperatorPractice {
    public void calculate() {
        int a = 7;
        int b = 3;

        // 답안 입력 시작
        int c = a+b;
        int d = a-b;
        int e = a*b;
        int f = a%b;
        // 답안 입력 끝

        System.out.println("a+b : " + c);
        System.out.println("a-b : " + d);
        System.out.println("a*b : " + e);
        System.out.println("a%b : " + f);
    }

    public static void main(String[] args) {
        new L09_Pr1_OperatorPractice().calculate();
    }
}
