package ch5;
import java.util.*;

abstract class Calculator
{
	protected int a,b;
	abstract protected int calc();		// �߻� �޼ҵ�
	protected void input()				// �� ������ �Է¹޴� �޼ҵ�
	{
		Scanner scanner = new Scanner(System.in);
		System.out.print("Input 2 integers : ");
		a = scanner.nextInt();
		b = scanner.nextInt();
	}
	public void run()					// �� ������ �Է¹޾� ����ϰ� ����� ����ϴ� �޼ҵ�
	{
		input();
		int res = calc();
		System.out.println("The result is : " + res);
	}
}

class Adder extends Calculator
{
	public int calc()
	{
		return a+b;
	}
}

class Subtracter extends Calculator
{
	public int calc()
	{
		return a-b;
	}

}

public class Pr5_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Adder adder = new Adder();
		Subtracter sub = new Subtracter();
		adder.run();
		sub.run();
		

	}

}
