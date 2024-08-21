#include <stdio.h>
#include <stdlib.h>

//While tekrarlama deyimidir. Koþul olumlu olduðu sürece devam eder.
//Bu koda for ekleyemeyiz, for sabit sayilarda gecerlidir.

int main(int argc, char *argv[]) 
{
	int secim;
	float vize, quiz, odev, final, ortalama;
	vize=0; //O denmesinin sebebi notlarýn 0'dan farklý olduðunu göstermek.
	quiz=0;
	odev=0;
	final=0;
	
	
	while(odev==0 || vize ==0 || quiz==0|| final==0)
	{
		printf("Hangi notu girmek istediginizi belirtin \nVize:1\tquiz:2\todev:3\tfinal:4\t");
	scanf("%d", &secim);
	
	switch (secim)
	{
		case 1:
			printf("Lutfen vize notunu girin");
			scanf("%f", &vize);
			break;
			
		case 2:
			printf("Lutfen quiz notunu girin");
			scanf("%f", &quiz);
			break;
			
		case 3:
			printf("Lutfen odev notunu girin");
			scanf("%f", &odev);
			break;
			
		case 4:
			printf("Lutfen final notunu girin");
			scanf("%f", &final);
			break;
			
		default:
			printf("!hata! bir isaret girmedin");
	
	}
		
}

if(vize>0 && quiz>0 && odev>0 && final>0)
	{
		ortalama = vize*0.3 + quiz*0.1 + odev*0.1 + final*0.5;
		printf("\n*************ORTALAMA**************\n\n");
		printf("Ogrenci ortalamasi = %f", ortalama);
	}
	else
	printf("Hatali Giris");
	
	return 0;
	
}
