package L10_ComparisonOperator;

public class OperatorExam2 {
    public static void main(String[] args) {
        // 비교 연산자
        int i = 10;
        int j = 10;
        System.out.printf("i == j ? %b\n", i==j);
        System.out.printf("i != j ? %b\n", i!=j);
        System.out.printf("i < j ? %b\n", i<j);
        System.out.printf("i <= j ? %b\n", i<=j);
        System.out.printf("i > j ? %b\n", i>j);
        System.out.printf("i >= j ? %b\n", i>=j);

        // 복합 대입 연산자
        i += 10;
        System.out.println("i : " + i);


    }
}
