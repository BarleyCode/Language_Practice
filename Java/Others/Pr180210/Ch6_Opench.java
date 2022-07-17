package ch6;
import java.util.*;

class Histogram
{
	char alphabet[] = new char[26];
	int alpha_count[] = new int[26];
	public Histogram(String sentence)
	{
		int i=0, j=0;
		for(i=0; i<26; i++)
		{
			alphabet[i] = (char) (97+i);		// char�� ���̸� 97+i�� ���ڷ� �ٲ�� a,b,c... ������ ��ȯ�ȴ�.
			alpha_count[i] = 0;
		}
		
		for(i=0; i<(sentence.length()); i++)
		{
			for(j=0; j<26; j++)
			{
				if(sentence.charAt(i) == alphabet[j])
				{
					alpha_count[j]++;
				}
			}
		}
	}
	public void show()
	{
		int i=0, j=0;
		System.out.println("Draw histogram.");
		for(i=0; i<26; i++)
		{
			System.out.print(alphabet[i] + " : ");
			for(j=0; j<alpha_count[i]; j++)
			{
				System.out.print("-");
			}
			System.out.println("");
		}
	}
		
}




public class Ch6_Opench {
	static String readString()		// �Լ� �� ���� ���ϸ� Ŭ���� �ȿ� ����! (main �ȿ� ���� ���� �߻�)
	{
		StringBuffer sb = new StringBuffer();
		Scanner scanner = new Scanner(System.in);
		while(true)
		{
			String line = scanner.nextLine();
			if(line.length() == 1 && line.charAt(0) == ';')
			{
				break;
			}
			sb.append(line);
		}
		return sb.toString();
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter String : ");
		String result = readString();
		Histogram his = new Histogram(result);
		his.show();

	}

}
