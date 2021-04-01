/*Nama File 	: BiayaParkir.c*/
/*Deskripsi 	: menghitung dan menampilkan biaya parkir*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <07-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
    int H;
/*Algoritma*/
    scanf("%d", &H);
    if (H > 0)
    {
        if (H <= 2)
        {
            printf("Rp. %d", 2000);
        }
        else
        {
            H = H - 2; // banyak jam yang dilewati setelah 2 jam
            printf("Rp. %d", 2000 + H * 500);
        }
    }else{
        printf("masukkan tidak valid");
    }
    return 0;
}