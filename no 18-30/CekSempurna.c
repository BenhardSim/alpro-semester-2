/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: mengecek apakah bilangan yang dimasukkan merupakkan bilangan sempurna*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
    /*Kamus*/
    int N; /* Masukkan */
	int i;
	int jumlah; /* menjumlahkan faktor */

    /*Algoritma*/
    jumlah = 0;
    printf("Masukkan angka : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                jumlah = jumlah + i;
            }
        }
        if (N == jumlah)
        {
            printf("%d adalah bilangan sempurna", N);
        }
        else
        {
            printf("%d bukan bilangan sempurna", N);
        }
    }
    else /* N<=0 */
    {
        printf("Masukan salah");
    }

    return 0;
}
