package test;
import java.util.Scanner;
import java.util.InputMismatchException;

public class Ch3_14 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.print("3���� ������ �Է��Ͻÿ� : ");
		int sum = 0, n = 0;
		for(int i=0; i<3; i++)
		{
			System.out.print(i+">>");
			try
			{
				n = s.nextInt();
			}
			catch(InputMismatchException e)
			{
				System.out.println("������ �ƴմϴ�. �ٽ� �Է��ϼ���.");
				s.next();
				i--;
				continue;
			}
			sum += n;
		}
		
		System.out.println("���� : " + sum);
		s.close();

	}

}
