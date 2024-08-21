#include <stdio.h>
#include <stdlib.h>

// S�f�rdan farkl� girilen say�lar�n toplam�n� yazan program
int main(int argc, char *argv[]) 
{
    int sayi;
    int toplam = 0;
    
    do
    {
        printf("Bir sayi giriniz: ");
        scanf("%d", &sayi);

        // Toplam i�lemini her durumda yap
        toplam += sayi;

        // Toplam� yaln�zca s�f�rdan farkl� say�lar girildi�inde yazd�r
        // `sayi` s�f�r oldu�unda `toplam`a eklenir ve bu, toplam�n s�f�r oldu�u anlam�na gelir
        printf("Toplam: %d\n", toplam);
        
    } while (sayi != 0);
    
    puts("Dongu bitti");
    
    return 0;
}

