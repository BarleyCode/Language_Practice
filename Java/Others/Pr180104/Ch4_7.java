package Pr180104;
import java.util.*;
class Book
{
	String title, author;
	public Book()
	{
		title = "���� ����";
		author = "���� ����";
	}
	public Book(String t, String a)
	{
		title = t;
		author = a;
	}
	void show()
	{
		System.out.println(title + " " + author);
	}
}

public class Ch4_7 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Book b[] = new Book[2];
		Scanner s = new Scanner(System.in);
		String title, author;
		
		for(int i=0; i<2; i++)
		{
			b[i] = new Book();
		}
		
		for(int i=0; i<2; i++)
		{
			System.out.print(String.format("%d", i+1) + "��° å ���� : ");
			title = s.nextLine();
			System.out.print(String.format("%d", i+1) + "��° å ���� : ");
			author = s.nextLine();
			b[i] = new Book(title, author);
		}
		
		for(int i=0; i<2; i++)
		{
			b[i].show();
		}
		s.close();
			
		

	}

}
