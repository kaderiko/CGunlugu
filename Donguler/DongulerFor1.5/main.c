#include <stdio.h>
#include <stdlib.h>

//Kosul sinamasi while da oldugu gibi donguye girmeden yapilir.
//Faktoriyel hesaplamasi

int main() {
	
	double faktor, limit;
	int i;
	faktor=1;
	
	printf("Lutfen Faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%lf", &limit);
	
	for(i=1; i<=limit; i++)
	{
		faktor*=i;
	}
	printf("%lf in Faktoriyeli:  %.2lf", limit, faktor);
	
	return 0;
}
