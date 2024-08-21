#include <stdio.h>
#include <stdlib.h>

//4 satýr 7 sütunluk bir program
//Ýçi içe döngüler ve çift boyutlu diziler

int main() 
{
	int i, j, hed_sat, hedef_sut;
	int mayin[4][7]={0,1,1,0,0,1,1, 1,0,0,0,1,0,0, 0,1,1,1,1,1,0, 1,1,1,0,0,0,0};
	for(i=0; i<4; i++)
	{
		for(j=0; j<7; j++)
		{
			printf("%d \t", mayin[i][j]);
		}
		printf("\n");
	}
	printf("\n \n Hedef koordinatlarini girin: ");
	printf("Satir: ");
	scanf("%d", &hed_sat);
	
	printf("Sutun: ");
	scanf("%d", &hedef_sut);
	
	if(mayin[hed_sat][hedef_sut]==1)
	{
		printf("Mayina bastiniz");
	}
	else
	{
		printf("Kurtuldunuz.");
	}
	
	return 0;
}
