#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int gun;
	printf("Haftanin kacinci gunu oldugunu girin");
	scanf("%d", &gun);
	
	switch(gun)
	{
		case 1:
			printf("%d inci gun Pazartesi", gun);
			break;
		
		case 2:
			printf("%d inci gun Salý", gun);
			break;
			
		case 3:
			printf("%d inci gun Carsamba", gun);
			break;
			
		case 4:
			printf("%d inci gun Persembe", gun);
			break;
			
		case 5:
			printf("%d inci gun Cuma", gun);
			break;
			
		case 6:
			printf("%d inci gun Cumartesi", gun);
			break;
			
		case 7:
			printf("%d inci gun Pazar", gun);
			break;
	}
	return 0;
}


