package L12_if;
import java.util.*;
/**
 * 문제 : int형 변수 value가 있습니다.
 * value가 3의 배수인지 변수를 3으로 나눈 나머지가 0인지를 검사해 확인합니다.
 * 다음 코드를 실행해 출력 결과를 확인하세요.
 * 3행에서 value의 값을 변경하면서 출력이 어떻게 바뀌는지 확인해보세요.
 */

// 제시된 코드 안 봤음
public class L12_Pr1_value01 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("배수 입력 : ");
        int value = s.nextInt();
        if(value % 3 == 0) {
            System.out.printf("%d은(는) 3의 배수입니다.\n", value);
        } else {
            System.out.println("아무것도 출력되지 않습니다.");
        }
    }
}
