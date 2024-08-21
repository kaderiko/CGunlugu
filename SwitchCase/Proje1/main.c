#include <stdio.h>
#include <stdlib.h>

/* �lk Program�m */ 

int main() 
{
	//printf("Merhaba Dunya");
	
	
	char operator;
	double firstNumber, secondNumber;
	
	printf("Bir i�lem se�in (+, -, *, /): ");
	scanf("%c", &operator);
	
	printf("�ki say� giriniz: ");
	scanf("%lf %lf", &firstNumber, &secondNumber);
	
	switch(operator)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
			break;
	
		
		case '-':
			printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
			break;
	
		
		case '*':
			printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
			break;
	
		
		case '/':
			printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
			break;
			
		//Operat�r herhangi bir durumla e�le�miyor. (+, -, *, /)
		default:
			printf("Hata bir i�aret girmediniz");
	}
	return 0;
}






// Integer ()--> 4 byte, Float () --> 4 byte, Char(1) --> 1 byte
// De�i�ken isimleri ilk 32 karakteri ayn� ise sistem sonraki karakterleri farkl� olsa bile ayn� alg�lan�r.

//Sabitler (Const): Sabit bildirimi, ba�lang�� de�eri verilen de�i�ken bildirimi gibi yap�l�r. (�rnek: const float, const double...) 
//K�t�phanede tan�mlan�rsa (#define  PI 3.14 (Global)) const float PI =3.14 (Yerel) diye kullan�labilir. Tan�mlanmazsa float x = 3.14 denir. 

