package test;
import java.util.Scanner;

public class Ch3_13 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int dividend;
		int divisor;
		
		System.out.print("������ �Է� : ");
		dividend = s.nextInt();
		System.out.print("�������� �Է��ϼ��� : ");
		divisor = s.nextInt();
		try
		{
			System.out.println(dividend + "�� " + divisor + "�� ������ ���� " + dividend/divisor + "�Դϴ�.");
		}
		catch(ArithmeticException e)
		{
			System.out.println("0���� ���� �� �����ϴ�!");
		}
		finally
		{
			s.close();
		}
		

	}

}
