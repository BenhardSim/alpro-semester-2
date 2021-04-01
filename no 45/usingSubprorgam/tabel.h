/*
Nama : Benhard Simanullang
NIM : 24060120140136
Tanggal : selasa 30 maret 2021
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

typedef int ElmtType;
typedef int IdxType;
typedef int TI[Nmax-Nmin+1]; /* tabel */

/*Prototype*/

/************************************************************************************/
/*																					*/
/*						KONSTRUKTOR													*/
/*																					*/
/************************************************************************************/

void CreateEmpty(TI* T);
/*proses : memanggil tiap elemen array dan mendeclare nya ke nilai 0*/
/*I.S : sembarang*/
/*F.S : menghasil kan sebuah tabel T dan menginisialisasi semua elemen nya ke nilai 0*/

/****************************************************************/
/*																*/
/* 					PREDIKAT TABEL 								*/
/* 																*/
/****************************************************************/

boolean isEmpty(TI* T);
//mengirimkan true apabila semua elemen tabel bernilai 0
//bila nilai dari T[Nmin] sampai T[Nmax] adalah 0

boolean IsFull(TI* T);
//mengirimlan true jika semua (sama dengan Nmax) nilai berniali 1
//bilai nilai dari T[Nmin] sampai T[Nmax] adalah 1

/****************************************************************/
/* 																*/
/* 					MENAMPILKAN ELEMENT  						*/
/* 																*/
/****************************************************************/

ElmtType NBElement(TI* T);
/*mengirimkan banyaknya elemen tabel T yang bernilai 1*/
/*mwngeluarkan banyak elemen yang yang nilai nya satu*/

/****************************************************************/
/* 																*/
/* 				       HUBUNGAN DENGAN I/O DEVICE    			*/
/* 																*/
/****************************************************************/

void SetElementTabel(TI* T, int N);
/*Proses : mengganti nilai elemen T[Nmin] sampai T[N] dengan nilai 1*/
/*I.S : Tabel masih kosong semua elemen bernilai 0*/
/*F.S : Tabel T terisi setiap elemen sebanyak N dengan nilai 1*/
