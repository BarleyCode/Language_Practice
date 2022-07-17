package L09_Operator;

public class OperatorExam1_2 {
    public static void main(String[] args) {
        int i = 5;
        int j = 2;
        System.out.println(i+j);
        System.out.printf("i+j : %d\n", i+j);
        System.out.printf("i-j : %d\n", i-j);
        System.out.printf("i*j : %d\n", i*j);
        System.out.printf("i/j : %d\n", i/j);
        System.out.println();

        // 캐스팅 연산자 double 사용 : j를 double로 형변환
        System.out.printf("i/(double)j : %f\n", i/(double)j);

        // 모듈러 연산 = 나머지 연산
        System.out.printf("i %% j : %d\n", i%j);
    }
}
