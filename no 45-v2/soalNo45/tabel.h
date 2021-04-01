/*
Nama : Benhard Simanullang
NIM : 24060120140136
Tanggal : rabu 31 maret 2021
*/
/************************************************************************************/
/*																					*/
/*			Nama File : tabel.h														*/
/*			Deskripsi : Header Abstract Data Type tabel								*/
/*																					*/
/************************************************************************************/


#ifndef TABEL_H
#define TABEL_H
#include "boolean.h"
#define Nmax 100
#define Nmin 1

typedef int arr[Nmax-Nmin+1];

/*Prototype*/

/************************************************************************************/
/*																					*/
/*						KONSTRUKTOR													*/
/*																					*/
/************************************************************************************/

void CreateEmpty(arr T);
/*proses : memanggil tiap elemen array dan mendeclare nya ke nilai 0*/
/*I.S : sembarang*/
/*F.S : menghasil kan sebuah tabel T dan semua nilai elemennya 0*/

/****************************************************************/
/*																*/
/* 					PREDIKAT TABEL 								*/
/* 																*/
/****************************************************************/

boolean isEmpty(arr T);
/*mengirimkan true apabila semua elemen tabel bernilai 0*/
/*apabila nilai dari T[Nmin] sampai T[Nmax] adalah 0*/

boolean IsFull(arr T);
/*mengirimlan true jika semua elemen (sama dengan Nmax) nilai berniali 1 */
/*apabila nilai dari T[Nmin] sampai T[Nmax] adalah 1 */


/****************************************************************/
/* 																*/
/* 					MENAMPILKAN ELEMENT  						*/
/* 																*/
/****************************************************************/

int NBElement(arr T);
/*mengeluarkan banyaknya elemen tabel T yang bernilai 1*/
/*yairu dengan menghitung banyak elemen yang yang nilai nya satu*/

/****************************************************************/
/* 																*/
/* 				       HUBUNGAN DENGAN I/O DEVICE    			*/
/* 																*/
/****************************************************************/

void SetElementTabel(arr T, int N);
/*Proses : mengganti nilai elemen T[Nmin] sampai T[N] dengan nilai 1*/
/*I.S : Tabel masih kosong semua elemen bernilai 0*/
/*F.S : Tabel T terisi setiap elemen sebanyak N dengan nilai 1*/

#endif



