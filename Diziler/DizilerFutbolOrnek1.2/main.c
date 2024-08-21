#include <stdio.h>
#include <stdlib.h>

//Madrid ={1,0,1,1,2,0,1,2,0,1} 15 puan üzerindeyse --> Tebrikler ligde kaldiniz. Altindaysa --> uzgunuz ligden dustunuz.
//1--> Galibiyet(3), 0-->(Beraberlik), 2-->Maglubiyet(0)

int main() 
{
	int i, toplam=0;
	int Madrid[]={1,0,1,1,2,0,1,2,0,1,};
	
	for(i=0; i<10; i++)
	{
		if (Madrid[i]==0)
		{
			toplam = toplam + 1;
		}
		else if (Madrid[i]==1)
		{
			toplam = toplam +3 ;
		}
		else if (Madrid[i]==2)
		{
			toplam = toplam +0 ;
		}
	}
	
	if(Madrid[10]>=15)
	{
		printf("Tebrikler ligde kaldiniz." );
	}
	else if(Madrid[10]<15)
	{
		printf("uzgunuz ligden dustunuz.");
	}
	else
	{
		printf("HATA!!!");
	}
	return 0;
}

