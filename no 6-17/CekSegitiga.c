/*Nama File 	: CekSegitiga.c*/
/*Deskripsi 	: menentukan dan menampilkan jenis sigitga*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <06-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
    int a, b, c;
/*Algoritma*/
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > 0 && b > 0 && c > 0)
    {
        // sama sisi
        if (a == b && b == c && c == a)
        {
            printf("segitiga sama sisi");
        }
        // sama kaki
        else if (a == b || b == c || c == a)
        {
            printf("segitiga sama kaki");
        }
        // sembarang
        else{
            printf("segitiga sembarang");
        }
    }
    else
    {
        printf("Terdapat nilai yang bukan segitiga");
    }

    return 0;
}