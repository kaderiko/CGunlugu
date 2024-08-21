#include <stdio.h>
#include <stdlib.h>

// int (Dizinin Tipi) a (Dizinin Adi) [100] (Dizinin Boyutu)
//Diziler

int main() 
{
	int i, toplam=0, A[5], ortalama;
	
	for(i=0; i<5; i++)
	{
		printf("Lutfen dizinin %d nci elemanini giriniz. :",i+1 );
		scanf("%d", &A[i]);
		toplam += A[i];
	}
	
	ortalama= toplam/5;
	printf("Ortalama %d", ortalama);
	return 0;
}
