package ch6.pr.exercise;
import java.util.*;

public class Ex6_6 {
	public static int RSP_result(int p1, int p2)
	{
		// ���� : 0, ���� : 1, �� : 2
		// ����� : p1, ��ǻ�� : p2
		// ����� �¸� : 0, ��ǻ�� �¸� : 1
		if((p1-p2) == 1)
			return 0;
		else if( (p1-p2) == -1)
			return 1;
		else if( (p1-p2) == 2 )
			return 1;
		else
			return 0;
	}
	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random r = new Random();
		Scanner s = new Scanner(System.in);
		String list[] = {"����", "����", "��"};
		String player[] = {"�����", "��ǻ��"};
		int choice = 0;
		int com_choice;
		while(true)
		{
			System.out.print("����(1), ����(2), ��(3), ������(4) : ");
			choice = s.nextInt();
			choice -= 1;
			if(choice == 3)
				break;
			
			com_choice = r.nextInt(2);
			if(choice == com_choice)
			{
				System.out.println("����� : " + list[choice] + ", ��ǻ�� : " + list[com_choice]);
				System.out.println("�����ϴ�.");
			}
			else
			{
				System.out.println("����� : " + list[choice] + ", ��ǻ�� : " + list[com_choice]);
				System.out.println(player[RSP_result(choice, com_choice)] + "�� �̰���ϴ�.");
				
			}	
			
			choice = 0;
			com_choice = 0;
			
		}
		System.out.println("�����մϴ�.");
		s.close();

	}

}
