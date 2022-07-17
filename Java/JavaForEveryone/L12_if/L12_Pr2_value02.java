package L12_if;
import java.util.*;

/**
 * 문제 : 다음 코드는 변수 value가 3인지를 검사해 3의 배수라면 ret에 3을 저장합니다.
 * if문 이후에 else if 구문을 추가해 value가 4의 배수인지를 검사하고,
 * 4의 배수라면 ret에 4를 저장하도록 만들어보세요.
 */
// 나 : public int IfTest 메소드가 있는 것까지만 확인. 내용은 내가 직접 구현
public class L12_Pr2_value02 {
    public int IfTest(int value) {
        int ret = 1;
        if(value % 3 == 0) {
            ret = 3;
        }
        else if (value % 4 == 0) {
            ret = 4;
        }
        return ret;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        L12_Pr2_value02 value02 = new L12_Pr2_value02();

        System.out.print("숫자 입력 : ");
        int valueInput = s.nextInt();
        System.out.printf("%d의 배수입니다.\n", value02.IfTest(valueInput));
    }
}
