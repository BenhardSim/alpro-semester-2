#include <stdio.h>

int main()
{
    // kamus
    float v0; // kecepatan awal
    float t; // waktu dalam detik
    float y; // jarak dalam meter
    float g = 9.8; // konstanta gravitasi
    // algoritma
    printf("kecepatan awal : ");
    scanf("%f", &v0);
    printf("waktu : ");
    scanf("%f", &t);

    y = v0 * t - (g * t * t) / 2;
    printf("jarak yang di tempuh : %f", y);

    return 0;
}
