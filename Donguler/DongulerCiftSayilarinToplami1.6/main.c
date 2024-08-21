#include <stdio.h>
#include <stdlib.h>

//Cift sayilarin toplami

int main() 
{
	int i;
	double toplam, limit;
	
	printf("Limit degerini giriniz. ");
	scanf("%lf", &limit);
	
	for(i=0; i<=limit; i+=2)
	{
		toplam+=toplam+i;
		printf("Toplam = %.lf \n", toplam);
	}
	
	printf("Toplam = %.lf", toplam);
	return 0;
}
