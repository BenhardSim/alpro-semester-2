/*Nama File 	: Kode7.3.c*/
/*Deskripsi 	: menampilkan isi dari tabel array dengan memori statis */
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <24-03-2021>*/

#include<stdio.h>/*header file*/
#include<stdlib.h>

int main(){
	
/*Kamus*/
	int T[5];
	int x;
	int i,j;
	int n;
	
/*Algoritma*/
	printf("Masukkan X : ");
	scanf("%d",&x);
	i=0;
	while(x != 9999 && i <5){
		T[i] = x;
		i++;
		printf("Masukkan X : ");
		scanf("%d",&x);
	}
	if(i >= 5){
		printf("Tabel Sudah penuh\n");
	}
	for(j = 0;j < i;j++){
		printf("%d ",T[j]);
	}
	

	return 0;
}
