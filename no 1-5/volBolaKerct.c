#include <stdio.h>

int main()
{

    // kamus
    float r, Vb, Vk;
    float PHI = 3.141592;

    // algoritma
    printf("Jari-jari : ");
    scanf("%f", &r);

    Vb = (4* PHI * r * r * r )/3;
    Vk = Vb/2;
    printf("Volume Bola : %f \n", Vb);
    printf("Volume Kerucut : %f", Vk);
    return 0;
}
