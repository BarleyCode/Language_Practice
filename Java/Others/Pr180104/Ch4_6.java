package Pr180104;

public class Ch4_6 {
	public static class Circle
	{
		int radius;
		Circle(int r)
		{
			radius = r;
		}
		double getArea()
		{
			return 3.14*radius*radius;
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i=0;
		Circle c[] = new Circle[5];
		for(i=0; i<5; i++)
		{
			c[i] = new Circle(i);
		}
		
		for(i=0; i<5; i++)
		{
			System.out.println(c[i].getArea());
		}
	

	}

}
