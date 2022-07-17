package Q1120;

public class Student extends Person {
    String school;
    public Student(String n, String s) {
        super(n);
        school = s;
    }
    public void whoRU() {
        System.out.println(school + "학교에 다니는 " + name + "입니다.");
    }
}
