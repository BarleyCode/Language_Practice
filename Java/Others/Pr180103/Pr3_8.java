package com;
import java.util.*;

public class Pr3_8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("��ǻ�Ϳ� ���� ���� �� ������ �մϴ�.");
		String user;
		int user_num = -1;
		String str[] = { "����", "����", "��" };
		int n = 0;
		
		while(true)
		{
			System.out.print("���� ���� ��! : ");
			user = s.next();
			if( user.equals("�׸�") )
				break;
			
			switch(user)
			{
			case "����":
				user_num = 0;
				break;
			case "����":
				user_num = 1;
				break;
			case "��":
				user_num = 2;
				break;	
			}
			
			n = (int)(Math.random() * 3);
			
			if(user_num != n)
			{

				if( (user_num == 2 && n == 0) || (user_num == 0 && n == 2) )
				{
					if(user_num == 2)
					{
						System.out.print("����� = " + user + " , ��ǻ�� = ");
						System.out.print(str[n]);
						System.out.println(" , " + " ��ǻ�Ͱ� �̰���ϴ�.");
					}
					if(n == 2)
					{
						System.out.print("����� = " + user + " , ��ǻ�� = ");
						System.out.print(str[n]);
						System.out.println(" , " + " ����ڰ� �̰���ϴ�.");
					}
				}
				else
				{
					if(user_num > n)
					{
						System.out.print("����� = " + user + " , ��ǻ�� = ");
						System.out.print(str[n]);
						System.out.println(" , " + " ����ڰ� �̰���ϴ�.");
						
					}
					if(user_num < n)
					{
						System.out.print("����� = " + user + " , ��ǻ�� = ");
						System.out.print(str[n]);
						System.out.println(" , " + " ��ǻ�Ͱ� �̰���ϴ�.");
					}
				}
				
			}
			else
			{
				System.out.print("����� = " + user + " , ��ǻ�� = ");
				System.out.print(str[n]);
				System.out.println(" , " + " �����ϴ�.");
			}
					
		}
		System.out.println("������ �����մϴ�.");
		s.close();
		
		
	}

}
