package Pr180104;
import java.util.*;

public class Ch4_2 {
	
	public static class Rectangle
	{
		int width;
		int height;
		int getArea()
		{
			return width*height;
		}
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.print("�ʺ�� ���̸� �Է��ϼ��� : ");
		Scanner s = new Scanner(System.in);
		Rectangle r = new Rectangle();
		r.width = s.nextInt();
		r.height = s.nextInt();
		
		System.out.println("���̴� : " + r.getArea());
		s.close();
		

	}

}
