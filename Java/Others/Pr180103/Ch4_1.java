package com;

public class Ch4_1 {
	public static class Circle
	{
		int radius;
		String name;
		
		public double getArea()
		{
			return 3.14*radius*radius;
		}

		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle pizza = new Circle();
		pizza.radius = 10;
		pizza.name = "�ڹ�����";
		double area = pizza.getArea();
		System.out.println(pizza.name + "�� ������ " + area);
		
		Circle donut = new Circle();
		donut.radius = 2;
		donut.name = "�ڹٵ���";
		area = donut.getArea();
		System.out.println(donut.name + "�� ������ " + area);
		
		

	}

}
