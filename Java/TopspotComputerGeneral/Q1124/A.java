package Q1124;

abstract public class A {
    public abstract void disp();
    public abstract int disp(int i);
    // 만약 C에 disp를 오버로딩해서 메서드를 하나 더 추가하고 싶다면
    // C->B->A 순으로 오버라이딩하므로 A에 int disp(int i)라고 추가하면 된다.
}
