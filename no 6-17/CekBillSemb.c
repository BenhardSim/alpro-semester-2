/*Nama File 	: CekBillSemb.c*/
/*Deskripsi 	: Klasifikasi bilangan ganjil dan genap*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <08-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main(){
/*Kamus*/
    int i;

/*Algoritma*/
    scanf("%d",&i);
    if(i > 0){
        printf("bilangan bulat positif");
    }else if(i<0){
        printf("bilangan bulat negatif");
    }else if(i == 0){
        printf("nol");
    }else{
        printf("bukan termasuk bilangan");
    }

    return 0;
}