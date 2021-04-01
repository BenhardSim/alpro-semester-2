/*Nama File 	: cekProsesBill.c*/
/*Deskripsi 	: klasifikasi bilangan ganjil dan genap*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <06-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main(){

/*Kamus*/
    int N;

/*Algoritma*/
printf("masukkan angka : ");
scanf("%d",&N);
    // genap
    if(N%2 == 0){
        N = N + 3;
        if(N%5 == 0){
            N = N + 5;
        }else{
            N = N + 2;
        }
    } 
    // ganjil
    else{
        N = N + 2;
        if(N%3 ==0){
            N = N + 4;
        }else{
            N = N + 1;
        }
    }

    printf("%d",N);

    return 0;
}