/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: mengecek apakah bilangan yang dimasukkan merupakkan bilangan prima*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
    int N; /* Masukkan/input */
    int i;
    int j;

/*Algoritma*/
	j=0;
    printf("Masukkan angka : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                j++;
            }
        }
        if (j == 2)
        {
            printf("%d adalah bilangan prima", N);
        }
        else
        {
            printf("%d bukan bilangan prima", N);
        }
    }
    else /* N<=0 */
    {
        printf("Masukan tidak sesuai");
    }

    return 0;
}
