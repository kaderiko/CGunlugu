#include <stdio.h>
#include <stdlib.h>

//Kullanicidan alinan 5 adet tam sayidan pozitif olanlarin faktoriyelini ekrana yazdiran program. Negatif deger girilmesi halinde uyari versin.
//Continue: Donguyu kýrar kale almaz ve devam eder.

int main(int argc, char *argv[]) 
{
	int i, j, sayi, faktoriyel =1;
	
	for(j=0; j<5; j++)
	{
		faktoriyel =1;
		printf("Lutfen %d nci sayiyi giriniz.", i+1);
		scanf("%d", &sayi);
		
		if(sayi>=0)
		{
			for(i=1; i<=sayi; i++)
		{
			faktoriyel = faktoriyel*i;
		}
		printf("%d nci sayinin Faktoriyeli: %d \n", i+1, faktoriyel);
		}	
		else
		{
			printf("Lutfen Pozitif Bir Tam Sayi Giriniz. \n");
			//break; //Break olduðunda dongu burada durur.
			i--;
			continue;
		}
	}
	return 0;
}
