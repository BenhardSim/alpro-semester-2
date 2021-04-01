#include <stdio.h>

int main()
{

// kamus
    float s1; // sisi satu layang-layang
    float s2; // sisi dua layang-layang
    float d1; // diagonal satu layang-layang
    float d2; // diagonal dua layang-layang
    float luas; // luas layang layang
    float kell; // keliling layang-layang
// algoritma
    printf("s1 : ");
    scanf("%f", &s1);

    printf("s2 : ");
    scanf("%f", &s2);

    printf("d1 : ");
    scanf("%f", &d1);

    printf("d2 : ");
    scanf("%f", &d2);

    Luas =  d1 * d2 / 2;
    Kell = 2 * (s1 + s2);

    printf("luas : %f\n", Luas);
    printf("Keliling : %f\n", Kell);

    return 0;
}
