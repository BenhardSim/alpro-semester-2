/*Nama File 	: isiMatrik.c*/
/*Deskripsi 	: mengisi matrik dengan ordo mxn*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <24-03-2021>*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/

int main(){
	
/* kamus */
	int M,N;
	int X[100][100];
	int i,j;
	
/* algoritma */	
	printf("masukkan ordo M : ");
	scanf("%d",&M); /* masukkan ordo m*/
	printf("masukkan ordo N : ");
	scanf("%d",&N); /* masukkan ordo m*/
	printf("\n");
	
	if(M > 0 && N>0){
		for(i = 0;i<M;i++){
			for(j = 0;j<N;j++){
			    if(i == j){
			        X[i][j] = 1;
			    }else if(i < j){
					X[i][j] = 0;
			    }else{
			        X[i][j] = 2;
			    }
			}
		}
		for(i = 0;i<M;i++){
			for(j = 0;j<N;j++){
				printf("%d ",X[i][j]);
			}
			printf("\n");
		}
	}else{
	    printf("Masukkan tidak tepat");
	}
	
	

	return 0;
}

