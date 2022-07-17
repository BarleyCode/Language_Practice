package L11_OperatorPrecedence;

public class OperatorExam3 {
    public static void main(String[] args) {
        int a=5, b=10, c=15;
        System.out.printf("a-b*c = %d\n", a-b*c);
        System.out.printf("(a-b)*c = %d\n", (a-b)*c);

        // 우선순위 : 비교 연산자 > 논리 연산자
        System.out.printf("a>5 && b>5 : %b\n", a>5 && b>5);
        System.out.printf("a>5 || b>5 : %b\n", a>5 || b>5);

        // 우선순위 : 전위 연산자 > 산술 연산자 > 후위 연산자
        System.out.printf("++a - 5 : %d\n", ++a-5);
        System.out.printf("a : %d\n", a);
    }
}
