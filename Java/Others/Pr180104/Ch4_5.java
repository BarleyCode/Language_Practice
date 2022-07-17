package Pr180104;

public class Ch4_5 {
	public static class Book
	{
		String title;
		String author;
		void show()
		{
			System.out.println(title + " " + author);
		}
		public Book(String title, String author)
		{
			this.title = title;
			this.author = author;
		}
		public Book(String title)
		{
			this(title, "���� �̻�");
		}
		public Book()
		{
			this("","");
			System.out.println("������ ȣ���");
		}
		
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Book javabook = new Book("Java", "Ȳ����");
		Book bible = new Book("Bible");
		Book emptybook = new Book();
		
		javabook.show();
		bible.show();
		emptybook.show();

	}

}
