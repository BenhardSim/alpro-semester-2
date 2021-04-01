/*
Nama : Benhard Simanullang
NIM : 24060120140136
Tanggal : rabu 31 maret 2021
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

/*	Body Prototype	*/

/****************************************************************/
/* 														    		*/
/* 							KONSTRUCTOR 						*/
/* 																*/
/****************************************************************/

void CreateEmpty(arr T)
{
    /*proses : memanggil tiap elemen array dan mendeclare nya ke nilai 0*/
    /*I.S : sembarang*/
    /*F.S : menghasil kan sebuah tabel T dan menginisialisasi semua elemen nya ke nilai 0*/
    /*Kamus Lokal*/
    int i;
    /*Algoritma*/
    for(i = 1;i<=Nmax;i++){
        T[i] = 0;
    }

}

/****************************************************************/
/*																*/
/* 					PREDIKAT TABEL 								*/
/* 																*/
/****************************************************************/

boolean isEmpty(arr T){
    /*mengirimkan true apabila semua elemen tabel bernilai 0*/
    /*bila nilai dari T[Nmin] sampai T[Nmax] adalah 0*/
    /*kamus lokal*/
    int i;
    /*algoritma*/
    for(i = 1;i<=Nmax;i++){
        if(T[i] != 0){
            return (false);
        }
    }
        return (true);

}

boolean IsFull(arr T){
    /*mengirimlan true jika semua (sama dengan Nmax) nilai berniali 1 */
    /*bilai nilai dari T[Nmin] sampai T[Nmax] adalah 1 */
    /*kamus lokal*/
    int i;
    /*algoritma*/
    for(i = 1;i<=Nmax;i++){
        if(T[i] != 1){
            return (false);
        }
    }
        return (true);
}


/****************************************************************/
/* 																*/
/* 					MENAMPILKAN ELEMENT  						*/
/* 																*/
/****************************************************************/

int NBElement(arr T){
    /*mengirimkan banyaknya elemen tabel T yang bernilai 1*/
    /*mengeluarkan banyak elemen yang yang nilai nya satu antara T[Nmin] sampai T[Nmax]*/
    /*kamus lokal*/
    int i;
    int sum;
    /*algoritma*/
    sum = 0;
    for(i=1;i<Nmax;i++){
        if(T[i] == 1){
            sum++;
        }
    }
    return sum;
}

/****************************************************************/
/* 																*/
/* 				       HUBUNGAN DENGAN I/O DEVICE    			*/
/* 																*/
/****************************************************************/
void SetElementTabel(arr T, int N){
    /*Proses : mengganti nilai elemen T[Nmin] sampai T[N] dengan nilai 1*/
    /*I.S : Tabel masih kosong semua elemen bernilai 0*/
    /*F.S : Tabel T terisi setiap elemen sebanyak N dengan nilai 1*/
    /*kamus lokal*/
    int i;
    /*algoritma*/
    CreateEmpty(T);
    if(N>Nmin && N<Nmax){
        for(i=1;i<=N;i++){
        T[i] = 1;
        }
    }else{
        printf("\nMasukkan tidak tepat\n");
    }


}



#endif
