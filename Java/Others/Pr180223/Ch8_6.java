package ch8;
import java.awt.*;
import javax.swing.*;

public class Ch8_6 extends JFrame {
	Ch8_6()
	{
		setTitle("��ġ������ ���� ���� ��ġ�� ��ġ�ϴ� ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container contentPane = getContentPane();
		
		contentPane.setLayout(null);
		
		// JLabel ������Ʈ�� �����ϰ� ���� ��ġ�� ũ�� ����
		JLabel la = new JLabel("Hello, Press Buttons!");
		la.setLocation(130, 50);
		la.setSize(200, 20);
		contentPane.add(la);
		
		// 9���� ��ư ������Ʈ�� �����ϰ� ������ ũ��� ����
		// ��ġ�� ���� ��ġ��
		for(int i=1; i<=9; i++)
		{
			JButton b = new JButton(Integer.toString(i));
			b.setLocation(i*15, i*15);
			b.setSize(50,20);
			contentPane.add(b);
		}
		
		setSize(300, 200);
		setVisible(true);
	}


	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Ch8_6();
		
		
		

	}

}
