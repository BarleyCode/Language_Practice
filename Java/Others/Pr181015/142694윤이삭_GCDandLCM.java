package Pr181015;
import java.util.*;

public class GCDandLCM {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=0, y=0, gcd=0, lcm=0;
		Scanner s = new Scanner(System.in);
		System.out.print("�� ���� �Է��ϼ���: ");
		x = s.nextInt();
		y = s.nextInt();
		gcd = GCD_cal(x,y);
		lcm = LCM_cal(x,y,gcd);
		System.out.println("�ִ������� " + gcd + "�Դϴ�.");
		System.out.println("�ּҰ������ " + lcm + "�Դϴ�.");
		s.close();

	}
	
	static int GCD_cal(int a, int b)
	{
		if((a%b) == 0) return b;
		else
		{
			return GCD_cal(b, a%b);
		}
	}
	
	static int LCM_cal(int a, int b, int gcd)
	{
		return (a * b) / gcd;
	}
}
