#include <stdio.h>
#include <stdlib.h>

//do While sarta uysun uymasin ilk islemi yapar.
//For'da ise for(baslangic, kosul, art�� ya da azalis) seklindedir.
//Asag�daki uygulamada 0'dan buyuk dememize ragmen eksili sayi yazdigimizda da sonuc verir ve dongu bitti der.
//puts("Metin"); --> "Metin" ifadesini ekrana yazar ve ard�ndan bir sat�r sonu karakteri ekler.

int main(int argc, char *argv[]) 
{
	
	int sayi;
	do
	{
		printf("Bir sayi giriniz:  ");
		scanf("%d", &sayi);
		printf("Iki Kati     : %d \n", 2*sayi);
	}
	while (sayi>0);
	puts("Dongu bitti");
	
	return 0;
}
