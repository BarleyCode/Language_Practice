package test;
import java.util.Scanner;
import java.util.Random;

public class Ch3_opench {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random r = new Random();
		Scanner s = new Scanner(System.in);
		int com_num = r.nextInt(100);
		int answer = -1;
		int left = 0, right = 99, turn = 1;
		System.out.println("���� �����Ͽ����ϴ�. ���߾� ������.");
		System.out.println(com_num);
		while(com_num != answer)
		{
			System.out.println(left + "-" + right);
			System.out.print(turn + ">>");
			answer = s.nextInt();
			
			if( answer < com_num)
			{
				System.out.println("�� ����!");
				left = answer;
			}
			else if (answer > com_num)
			{
				System.out.println("�� ����!");
				right = answer;
			}
			turn++;
		}
	
		System.out.println("�¾ҽ��ϴ�.");
		s.close();
	}

}
