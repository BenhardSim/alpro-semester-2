/*Nama File 	: FaktorBill.c*/
/*Deskripsi 	: mencari faktor dari suatu bilangan*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
    int N, i;

/*Algoritma*/
    printf("Masukkan angka : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else /* N<=0 */
    {
        printf("Masukkan salah");
    }

    return 0;
}
