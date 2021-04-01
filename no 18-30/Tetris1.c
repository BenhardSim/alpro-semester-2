/*Nama File 	: Tetris1.c*/
/*Deskripsi 	: membuat susunan menjadi segitiga terbalik dengan baris sebanyak N*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
    /*Kamus*/
    int N, i, j;

    /*Algoritma*/
    printf("Masukkan angka : ");
    scanf("%d", &N); // jumlah baris
    if (N > 0)
    {
        for (i = N; i >= 1; --i)
        {
            for (j = i; j >= 1; --j)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else /* N<=0 */
    {
        printf("Masukkan tidak tepat.");
    }

    return 0;
}
