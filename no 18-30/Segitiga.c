/*Nama File 	: Tetris3.c*/
/*Deskripsi 	: membuat susunan segitiga terbalik dengan baris sebanyak N*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{

	/*Kamus*/
	int n;		 /* Masukkan */
	int k, i, j; /* variable counter */
	int m = 1;	 /* variable counter */

	/*Algoritma*/
	printf("Masukkan angka : ");
	scanf("%d", &n);
	if (n > 0)
	{
		for (i = n; i >= 1; i--)
		{
			for (k = 1; k < m; k++)
			{
				printf(" ");
			}
			for (j = 1; j <= i; j++)
			{
				printf("* ");
			}
			m++;
			printf("\n");
		}
	}
	else /* n<=0 */
	{
		printf("Masukkan salah.");
	}

	return 0;
}
