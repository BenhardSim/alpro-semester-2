/*Nama File 	: DNAKambing.c*/
/*Deskripsi 	: menampilkan apakah kambing merupakan saudara atau bukan */
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <24-03-2021>*/

#include<stdio.h>/*header file*/
#include<stdlib.h>
#include <math.h>

int main(){
	
/*Kamus*/
	int kambingA[5] = {2,6,8,12,14};
	int kambingB[5] = {4,10,11,14,20};
	int i,j;
	int saudara;
	
/*Algoritma*/
	saudara = 0;
	for(i = 0;i<5;i++){
		if(abs(kambingA[i]-kambingB[i]) < 3){
			saudara++;
		}
	}
	
	printf("Jumlah kambing yang saling bersaudara adalah : %d",saudara);
		
	return 0;
}
