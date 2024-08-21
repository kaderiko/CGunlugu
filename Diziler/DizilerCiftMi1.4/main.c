#include <stdio.h>
#include <stdlib.h>

//int sayilar[] = {1,4,13,28,35,46} dizisindeki cift sayilarin toplamini ekrana yazdir.

int main() 
{
	int toplam=0, i;
	int sayilar[] = {1,4,13,28,35,46};
	
	
	for(i=0; i<6; i++)
	{
		
		if(sayilar[i] %2==0)
		{
		toplam = toplam +sayilar[i];
		
		}
		else 
		{
		toplam = toplam +0;
		}
	}
	printf("Cift Sayilarin Toplami: %d", toplam);	
	
	
	return 0;
}
