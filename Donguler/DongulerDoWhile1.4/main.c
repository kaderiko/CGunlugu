#include <stdio.h>
#include <stdlib.h>

// Sýfýrdan farklý girilen sayýlarýn toplamýný yazan program
int main(int argc, char *argv[]) 
{
    int sayi;
    int toplam = 0;
    
    do
    {
        printf("Bir sayi giriniz: ");
        scanf("%d", &sayi);

        // Toplam iþlemini her durumda yap
        toplam += sayi;

        // Toplamý yalnýzca sýfýrdan farklý sayýlar girildiðinde yazdýr
        // `sayi` sýfýr olduðunda `toplam`a eklenir ve bu, toplamýn sýfýr olduðu anlamýna gelir
        printf("Toplam: %d\n", toplam);
        
    } while (sayi != 0);
    
    puts("Dongu bitti");
    
    return 0;
}

