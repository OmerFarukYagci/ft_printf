#include <stdio.h>
#include <stdarg.h>

double topla(int adet, ...)
{
    
    va_list argumanlar; // 1. Listeyi tutacak değişkeni tanımla
    double toplam = 0;

    // 2. Listeyi başlat. 
    // 'adet' değişkeninden sonra gelenleri okumaya başlayacağımızı belirtiyoruz.
    va_start(argumanlar, adet);

    // 3. Döngü ile argümanları tek tek çek
    for (int i = 0; i < adet; i++)
	{
        // va_arg kullanırken verinin tipini (double) belirtmeliyiz
        double sayi = va_arg(argumanlar, double);
        toplam += sayi;
    }

    // 4. İşlem bitti, listeyi kapat
    va_end(argumanlar);

    return toplam;
}

int main()
{
    // 3 adet sayıyı topla: 1.5, 2.5, 3.0
    printf("Toplam: %.2f\n", topla(3, 1.5, 2.5, 3.0));

    // 5 adet sayıyı topla
    printf("Toplam: %.2f\n", topla(5, 10.0, 20.0, 30.0, 40.0, 50.0));

    return 0;
}