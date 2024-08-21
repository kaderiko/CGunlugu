#include <stdio.h>
#include <stdlib.h>

//Kullanicidan alinan sayiya kadar olan sayilarin toplami ama while ile olacak.

int main() 
{
	int i=0, sayi, toplam =0; //Sayacimiz olmasý gerekiyor 0'dan baslayacak toplam degeri.
	printf("Lutfen bir sayi degeri girin: ");
	scanf("%d", &sayi);
	
	while(i<sayi)
	{
		toplam = toplam +i;
		i++;
	}
	printf("Girdiginiz sayiya kadar olan sayilarin toplami %d", toplam);
	
/* int i =1, sayi, faktoriyel=1;
printf("Lutfen bir sayi degeri girin: ");
scanf("%d", &sayi);

do
{
faktoriyel = faktoriyel*i;
i++;
printf("Yine de calistii");
}
while(i<=sayi); */


	return 0;
}
