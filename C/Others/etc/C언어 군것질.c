#include <stdio.h>

int main(void)
{
	int cream, shrimp, cola;

	for( cream=1; cream<9; cream++)
	{
		for(shrimp=1; shrimp<9; shrimp++)
		{
			for(cola=1; cola<9; cola++)
			{
				if( ( (cream*500)+(shrimp*700)+(cola*400) )==3500)
					printf("크림 %d개, 새우 %d개, 콜라 %d개 \n", cream, shrimp, cola);
			}
			
		}
		
	}
	return 0;
}
