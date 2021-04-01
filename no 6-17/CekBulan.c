/*Nama File 	: CekBulan.c*/
/*Deskripsi 	: menampilkan nama bulan*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <06-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main(){
/*Kamus*/
    int N;
/*Algoritma*/
    scanf("%d",&N);
    if(N == 1){
        printf("januari");
    }else if(N == 2){
        printf("februari");
    }else if(N == 3){
        printf("maret");
    }else if(N == 4){
        printf("april");
    }else if(N == 5){
        printf("mei");
    }else if(N == 6){
        printf("juni");
    }else if(N == 7){
        printf("juli");
    }else if(N == 8){
        printf("agustus");
    }else if(N == 9){
        printf("september");
    }else if(N == 10){
        printf("oktober");
    }else if(N == 11){
        printf("november");
    }else if(N == 12){
        printf("desember");
    };
    return 0;
}