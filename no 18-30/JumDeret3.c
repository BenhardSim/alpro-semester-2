/*Nama File 	: JumDeret3.c*/
/*Deskripsi 	: mencari nilai penjumlahan dan pengurangan sampai nilai ke N */
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <17-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
	/*Kamus*/
	int N;	 /*input*/
	int i;	 /*variable counter*/
	int sum; /*variable counter*/
	int c;

	/*Algoritma*/
	sum = 0;
	printf("Masukkan angka : ");
	scanf("%d", &N);
	if (N > 0)
	{
		for (i = 1; i <= N; i++)
		{
			if (i % 2 == 0)
			{
				sum = sum - i;
			}
			else
			{
				sum = sum + i;
			}
		}
		printf("%d", sum);
	}
	else /* N <= 0*/
	{
		printf("Masukkan tidak tepat");
	}

	return 0;
}
