/*
Nama : Benhard Simanullang
NIM : 24060120140136
Tanggal : selasa 30 maret 2021
*/

/****************************************************************/
/* 																*/
/* 						Nama File : tabel.c 					*/
/* 				Deskripsi : Body Abstract Data Type Tabel 		*/
/* 																*/
/****************************************************************/

#ifndef TABEL_C
#define TABEL_C
#include "tabel.h"
#include <stdio.h>
#include "tabel.h"
#include <stdio.h>

/*	Body Prototype	*/

/****************************************************************/
/* 																*/
/* 							KONSTRUCTOR 						*/
/* 																*/
/****************************************************************/

void CreateEmpty(TI* T){
    /*proses : memanggil tiap elemen array dan mendeclare nya ke nilai 0*/
    /*I.S : sembarang*/
    /*F.S : menghasil kan sebuah tabel T dan menginisialisasi semua elemen nya ke nilai 0*/
    /*Kamus Lokal*/
    int i;
    int size;
    /*Algoritma*/
    size = sizeof(T)/sizeof(int);
    for(i = 0;i<=size;i++){
        T[i] = 0;
        printf("%d",T[i]);
    }


}

int main(){

    TI T;
    CreateEmpty(T);
    return 0;
}







