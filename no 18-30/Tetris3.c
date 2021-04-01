/*Nama File 	: Tetris3.c*/
/*Deskripsi 	: membuat susunan baris bintang dengan susunan Un=1/2*n*(n+1) */
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
	/*Kamus*/
	int n; /*banyak baris*/
	int i; /*variable counter*/
	int j; /*variable counter*/
	int m; /*variable counter*/

	/*Algoritma*/

	printf("Masukkan angka : ");
	scanf("%d", &n);

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			m = (i * (i + 1)) / 2;
			for (j = 1; j <= m; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else /* N<=0 */
	{
		printf("Masukkan tidak tepat");
	}

	return 0;
}
