/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: menunjukkan tunjugan anak berdasrkan gaji*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <08-03-2021>*/

#include <stdio.h> /*header file*/
/*Program Utama*/

int main(){
/*KAMUS LOKAL*/
    int Jumlah;
    int Gaji;

/*ALGORITMA*/
    printf("Masukkan Jumlah Anak (0-3) = ");
    scanf("%d", &Jumlah);
    printf("Masukkan Gaji Pokok = ");
    scanf("%d", &Gaji);

    if (Jumlah >= 0 && Gaji > 0)
    {
        if(Jumlah <= 3)
        {
            printf("Maka Tunjangan Anak = %d\n", Jumlah * Gaji / 10); //OUTPUT
        }
        else if (Jumlah > 3)
        {
            printf("Maka Tunjangan Anak = %d\n", 3 * Gaji / 10); //OUTPUT
        }
    }
    else
    {
        printf("Masukan Tidak Valid"); //OUTPUT
    }

    return 0;
}
