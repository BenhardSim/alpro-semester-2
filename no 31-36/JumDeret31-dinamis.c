/*Nama File 	: JumDeret31.c*/
/*Deskripsi 	: menjumlahkan dan mengurangi deret bilangan dengan array secara dinamis*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <24-03-2021>*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/

int main()
{
    /*Kamus*/
	int N;
	int *p;
	int i;
	int sum;

    /*Algoritma*/
    sum = 0;
    printf("Masukan panjang array : ");
	scanf("%d",&N);
	//alokasi memory
	p = (int*)malloc(N*sizeof(int));
	for(i = 0;i<N;i++){
		p[i] = i+1;
		printf("nilai dari p[%d] adalah %d\n",i,p[i]);
		if(p[i]%2 == 0){
			sum  = sum - p[i];
		}else{
			sum  = sum + p[i];
		}
	}
	free(p);
	
	printf("jumlah semua element = %d",sum);
	
	return 0;

}
