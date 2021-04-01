/*Nama File 	: DeretPrima.c*/
/*Deskripsi 	: mencari deret bilangan prima dari suatu bilangan*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
    int N; /* Masukkan */
    int j; /* Variabe Counter */
    int i; /* Variabe Counter */
    int m; /* Variabe Counter */

/*Algoritma*/
	
    printf("Masukkan angka : ");
    scanf("%d", &N);
    
    if (N > 0)
    {
        for (i = 1; i <= N; i++)
        {	
        	m = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    m++;
                }
            }
            if (m == 2)
            {
                printf("%d ", i);
            }
    	}
    }
    else /* N<=0 */
    {
        printf("Input tidak sesuai, masukkan angka yang lebih besar dari 0");
    }
    return 0;
}
