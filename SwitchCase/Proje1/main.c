#include <stdio.h>
#include <stdlib.h>

/* Ýlk Programým */ 

int main() 
{
	//printf("Merhaba Dunya");
	
	
	char operator;
	double firstNumber, secondNumber;
	
	printf("Bir iþlem seçin (+, -, *, /): ");
	scanf("%c", &operator);
	
	printf("Ýki sayý giriniz: ");
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
			
		//Operatör herhangi bir durumla eþleþmiyor. (+, -, *, /)
		default:
			printf("Hata bir iþaret girmediniz");
	}
	return 0;
}






// Integer ()--> 4 byte, Float () --> 4 byte, Char(1) --> 1 byte
// Deðiþken isimleri ilk 32 karakteri ayný ise sistem sonraki karakterleri farklý olsa bile ayný algýlanýr.

//Sabitler (Const): Sabit bildirimi, baþlangýç deðeri verilen deðiþken bildirimi gibi yapýlýr. (örnek: const float, const double...) 
//Kütüphanede tanýmlanýrsa (#define  PI 3.14 (Global)) const float PI =3.14 (Yerel) diye kullanýlabilir. Tanýmlanmazsa float x = 3.14 denir. 

