/*Nama File 	: JumDeret21.c*/
/*Deskripsi 	: menjumlahkan deret bil ganjil dengan array secara statis*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <24-03-2021>*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/

int main()
{
    /*Kamus*/
	int N;
	int p[1000];
	int i;
	int sum;

    /*Algoritma*/
    sum = 0;
    printf("Masukan panjang array : ");
	scanf("%d",&N);
	if(N > 2){
		for(i = 1;i<=N;i++){
		p[i] = 2*(i)-1;
		printf("nilai dari p[%d] adalah %d\n",i,p[i]);
		sum  = sum + p[i];
	}
	
	printf("jumlah semua element = %d",sum);
	}else{
		printf("Masukkan tidak tepat");
	}
	
	
	return 0;

}
