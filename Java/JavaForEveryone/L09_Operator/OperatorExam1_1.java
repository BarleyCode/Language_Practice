package L09_Operator;

public class OperatorExam1_1 {
    public static void main(String[] args) {
        int i1 = -5;
        
        // + 부호 : 부호 비트 그대로 유지. +로 바꾸는 거 아님
        int i2 = +i1;
        
        // - 부호 : 음수 ↔ 양수
        int i3 = -i1;

        // ++i3 = i3에 1 더하기
        int i4 = ++i3;

        // i3++ : 얘도 i3에 1 더하는데, i5에 먼저 대입 후 i3 1 증가
        int i5 = i3++;


        System.out.println("i1 : " + i1 + '\n' +
                "i2 : " + i2 + '\n' +
                "i3 : " + i3 + '\n' +
                "i4 : " + i4 + '\n' +
                "i5 : " + i5 + '\n');
    }
}
