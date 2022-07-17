package Q1117;

public class Bar extends Foo {
    public int a = 8;
    public void addValue(double i) {
        a = a + (int)i;
        System.out.println("Bar : " + a + " ");
    }
    public void addFive() {
        a += 5;
        System.out.println("Bar : " + a + " ");
    }
}
