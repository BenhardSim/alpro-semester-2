/*Nama File 	: SiputNaik.c*/
/*Deskripsi 	: mencari berapa hari waktu yang dibutuhkan*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
    /*Kamus*/
    float N; /*kedalaman lubang*/
    float M = 0;
    int hari = 0;
    int run = 1;

    /*Algoritma*/
    scanf("%f", &N);
    if (N > 0)
    {
        while (run == 1)
        {
            M = M + 0.3;
            M = M - 0.1;

            if (M >= N)
            {
                run = 0;
            }
            else
            {
                hari++;
            }
        }
        printf("lama hari yang dibutuhkan adalah : %d", hari);
    }
    else
    {
        printf("Masukkan tidak tepat");
    }

    return 0;
}
