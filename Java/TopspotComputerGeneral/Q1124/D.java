package Q1124;

public class D {
    public static void main(String[] args) {
        System.out.println("D main func");
        A cp = new C();
        B bp = new C();
        A cp2 = new C();
        bp.disp();
        int test = cp2.disp(3);
    }
}
