package Pr180104;

public class Ch4_3 {
	public static class Circle
	{
		int radius;
		String name;
		Circle()
		{
			radius = 1;
			name = "";
		}
		Circle(int r, String n)
		{
			radius = r;
			name = n;
		}
		public double getArea()
		{
			return 3.14*radius*radius;
		}
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle pizza = new Circle(10, "�ڹ�����");
		double area = pizza.getArea();
		System.out.println(pizza.name + "�� ������ " + area);
		
		Circle donut = new Circle();
		donut.name = "��������";
		area = donut.getArea();
		System.out.println(donut.name + "�� ������ " + area);

	}

}
