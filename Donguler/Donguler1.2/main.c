#include <stdio.h>
#include <stdlib.h>

//While dongusu ile 500'e kadar olan Fibonacci sayilarinin bulunmasi.
//Temp: Gecici


int main(int argc, char *argv[]) {
	
	int t2,limit,t1,sonraki;
	t1=0;
	t2=1;
	
	printf("Lutfen limit degerini girin");
	scanf("%d", &limit);
	
	while(t1< limit)
	{
		printf("%d\t",t1);
		sonraki = t1+t2;
		t1=t2;
		t2= sonraki;
		
	}
	
	return 0;
}
