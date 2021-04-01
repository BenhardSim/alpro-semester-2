/*Nama File 	: JumDeret11.c*/
/*Deskripsi 	: menjumlahkan deret bilangan dengan array secara statis*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <24-03-2021>*/

#include <stdio.h>/*header file*/
#include <stdlib.h>
/*Program Utama*/

int main(){
	
/* kamus */
	int N;
	int p[1000];
	int i;
	int sum = 0;
	
/* algoritma */	
	printf("Masukan panjang array : \n");
	scanf("%d",&N);
	if( N > 0){
		for(i = 1;i<=N;i++){
		p[i] = i;
		printf("nilai dari p[%d] adalah %d\n",i,p[i]);
		sum  = sum + p[i];
	}
	printf("jumlah semua element = %d",sum);
	}else{
		printf("Masukan tidak tepat");
	}
	
	
	return 0;
}
