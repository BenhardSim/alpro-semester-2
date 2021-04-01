// Nama Program : gayaSentr.c
// Tanggal : 27 february 2021
#include <stdio.h>

int main()
{

    // kamus
    float m; // besar massa dalam kilogram
    float v; // besar kecepatan dalam meter per detik
    float r; // radius dalam meter
    float F; // gaya sentripetal dalam newton
    // algoritma
    printf("massa : ");
    scanf("%f", &m);
    printf("kecepatan : ");
    scanf("%f", &v);
    printf("radius : ");
    scanf("%f", &r);

    F = m * (v * v / r);
    printf("gaya sentripetal : %f", F);

    return 0;
}