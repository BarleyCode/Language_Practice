#include <iostream>

int main(void)
{
	int basic = 50;
	int sell = 0;
	int result = 0;

	while (1)
	{
		
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end): ";
		std::cin >> sell;
		if (sell == -1)
		{
			std::cout << "���α׷��� �����մϴ�" << std::endl;
			break;
		}
		result = basic + (sell * 0.12);
		std::cout << "�̹� �� �޿�: " << result << "����" << std::endl;
		

	}

	
	
	return 0;
}

