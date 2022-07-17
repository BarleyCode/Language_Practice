package Q1117;

public class Foo {
    public int a = 3;
    public void addValue(int i) {
        a = a + i;
        System.out.println("Foo : " + a + " ");
    }
    public void addFive() {
        a += 5;
        System.out.println("Foo : " + a + " ");
    }
}
