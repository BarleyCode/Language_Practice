package ch5;

class A
{
	
	public A()
	{
		System.out.println("������A");
	}
	
	public A(int x)
	{
		System.out.println("�Ű�����������A "+x);
	}
}

class B extends A
{
	public B()
	{
		System.out.println("������B");
	}
	public B(int x)
	{
		super(x);
		System.out.println("�Ű�����������B " + x);
	}
}
	

public class Ex5_another_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		B b;
		b = new B(5);
		

	}

}
