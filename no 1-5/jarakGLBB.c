#include <stdio.h>

int main()
{
    // kamus
    float v0; // keceparan dalam meter per detik
    float t; // waktu dalam detik
    float a; // percepatan dalam meter per detik kuadrat
    float s; // jarak dalam meter
    // algoritma

    printf("kecepatan awal : ");
    scanf("%f", &v0);
    printf("waktu : ");
    scanf("%f", &t);
    printf("percepatan : ");
    scanf("%f", &a);
    s = v0 * t + (a * t * t) / 2;

    printf("jarak yang di tempuh : %f\n", s);

    return 0;
}
