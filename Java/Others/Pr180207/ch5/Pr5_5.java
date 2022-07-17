package ch5;
import java.util.*;

interface StackInterface
{
	int length();			// ���ÿ� ��� �ִ� ���ڿ� ���� ����
	String pop();			// ������ �鿡 �ִ� ���ڿ� pop
	boolean push(String ob);		// ������ top�� ���ڿ� ob�� push�ϱ�
}

class StringStack implements StackInterface
{
	int arr_length = 0;
	String arr[] = new String[5];
	public boolean push(String ob)
	{
		if(arr_length >= 5)
		{
			System.out.println("Sorry. array is already full.");
			return false;
		}
		else
		{
			arr[arr_length] = ob;
			arr_length++;
			return true;
		}
	}
	public String pop()
	{
		if(arr_length <= 0)
		{
			String error = "Sorry, array is empty.\n";
			return error;
		}
		else
		{
			String tmp = arr[arr_length - 1];
			arr[arr_length-1] = null;
			arr_length -= 1;
			return tmp;
		}
		
	}
	public int length()
	{
		return arr_length;
	}
	
	
}

public class Pr5_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		String word = null;
		StringStack st = new StringStack();
		for(int i=0; i<5; i++)
		{
			System.out.print("Word " + (String.format("%d", i+1)) + " : ");
			word = s.next();
			st.push(word);
		}
		for(int i=0; i<5; i++)
		{
			System.out.print(st.pop() + " ");
		
		}
		
		
		
		s.close();
		

	}

}
