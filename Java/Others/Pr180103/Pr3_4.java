package com;
import java.util.Scanner;
import java.util.*;

public class Pr3_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		char day[] = new char[7];
		int date = 0;
		day[0] = '��'; day[1] = '��'; day[2] = 'ȭ'; day[3] = '��'; day[4] = '��'; day[5] = '��'; day[6] = '��';

		while(true)
		{
			try
			{	
				System.out.print("������ �Է��ϼ��� : ");
				date = s.nextInt();
				if( date == -1)
					break;
				System.out.println(day[date%7]);
			}
			catch(InputMismatchException e)
			{
				s = new Scanner(System.in);			// Scanner�� ���׷� ���� �ʱ�ȭ (��ó http://loveiskey.tistory.com/33)
				System.out.println("���! ���� �Է����� �ʾҽ��ϴ�.");
				
			}
		}
		
		System.out.println("���α׷��� �����մϴ�.");
		s.close();
	}

}
