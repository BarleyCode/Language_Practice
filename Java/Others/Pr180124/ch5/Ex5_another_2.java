package ch5;

class Person
{
	String name;
	String id;
	public Person(String name)
	{
		this.name = name;
	}
}

class Student extends Person
{
	String grade;
	String department;
	
	public Student(String name)
	{
		super(name);
	}
	
	
}

public class Ex5_another_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Person p;
		Student s = new Student("���繮");
		p = s;
		
		System.out.println(p.name);
		
		Person p2 = new Student("����");
		Student s2;
		
		s2 = (Student)p2;
		
		System.out.println(s2.name);
		s2.grade = "A";
		

	}

}
