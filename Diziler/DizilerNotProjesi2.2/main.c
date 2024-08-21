#include <stdio.h>
#include <stdlib.h>

/* Ýç içe döngüler ve Çift boyutlu diziler*/

int main() 
{	int i,j;
	int ogrenci[3][4];
	float ort[3],toplam=0;
	for(i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d inci ogrencinin %d inci notunu girin",i+1,j+1);
			scanf("%d",&ogrenci[i][j]);
			toplam+=ogrenci[i][j];
		}
		ort[i]=toplam/4;
		toplam=0;
		printf("Ortalama = %f\n",ort[i]);
	}

	return 0;
}
