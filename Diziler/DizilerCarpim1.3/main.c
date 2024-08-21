#include <stdio.h>
#include <stdlib.h>

//int dizi[] = {1,3,5,7,9} dizinin elemanlarinin birbiriyle carpim sonucunu ekrana yazdir.


int main() 
{
	int i, carpim =1;
	int dizi[] = {1,3,5,7,9};
	
	for(i=0; i<5; i++)
	{
		carpim = carpim * dizi[i];
	}
	printf("Dizinin elemanlari carpimi : %d" ,carpim);
	return 0;
}
