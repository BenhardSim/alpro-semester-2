/*Nama File 	: Tetris3.c*/
/*Deskripsi 	: membuat susunan segitiga terbalik dengan baris sebanyak N*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{

	/*Kamus*/
	int n;
	int m = 1;

	/*Algoritma*/
	printf("Masukkan angka : ");
	scanf("%d", &n);
	for (int i = n; i >= 1; i--)
	{
		for (int l = 1; l < m; l++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		m++;
		printf("\n");
	}

	return 0;
}
