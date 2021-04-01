/*Nama File 	: Tetris2.c*/
/*Deskripsi 	: membuat susunan menjadi segitiga terbalik dengan baris sebanyak N*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
    /*Kamus*/
    int N, i, j, M;

    /*Algoritma*/
    printf("Masukkan angka : ");
    scanf("%d", &N); // jumlah baris
    M = N * 2 - 1;

    if (N > 0)
    {
        for (i = 1; i <= M; ++i)
        {
            for (j = 1; j <= i; ++j)
            {
                if (i <= N)
                {
                    printf("* ");
                }
                // untuk mengprint bintang dibawah baris ke 5
                else if (i > N && j <= M - i + 1)
                {
                    printf("* ");
                }
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
