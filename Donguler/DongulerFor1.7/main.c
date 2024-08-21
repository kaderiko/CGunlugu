#include <stdio.h>
#include <stdlib.h>

//5 adet ogrenciden vize, odev ve final notlar�n� alarak not ortalamas� ve not derecesini hesaplayan program
//90-100 aras� A, 80-90 aras� B, 70- 80 aras� C, 60- 50 aras� D, 0- 60 aras� "Uzgunuz F ile kaldiniz.".

int main() 
{	
	
	float odev, vize, final, ortalama;
	int i; //i'yi int'de yapmam�z�n sebebi float'ta ondalikli sayilarin olmasindan.
	
	for(i=0; i<5; i++)
	{
		printf("Lutfen %d nci ogrencinin odev notunu giriniz.", i+1);
		scanf("%f", &odev);
		
		printf("Lutfen %d nci ogrencinin vize notunu giriniz.", i+1);
		scanf("%f", &vize);
		
		printf("Lutfen %d nci ogrencinin final notunu giriniz.", i+1);
		scanf("%f", &final);
		
		ortalama = (vize + final + odev)/3;
		printf("Ortalama: %f \n ", ortalama);
		
	if(ortalama>=90 && ortalama<=100)
	{
		printf("A ile gectiniz. \n");
	}
	else if(ortalama >=80 && ortalama<90)
	{
		printf("B ile gectiniz \n");
	}
	else if(ortalama>= 70 && ortalama<80)
	{
		printf("C ile gectiniz. \n");
	}
	else if(ortalama >= 60 && ortalama<70)
	{
		printf("D ile gectiniz. \n");
	}
	else if(ortalama >= 0 && ortalama < 60)
	{
		printf("Uzgunuz F ile kaldiniz. \n");
	}
	else 
	{
		printf("HATA!!! \n");
	}
		
	}
	return 0;
}
