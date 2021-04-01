/*
Nama : Benhard Simanullang
NIM : 24060120140136
Tanggal : rabu 31 maret 2021
*/
/***************************************************************/
/*                                                              */
/*      Nama File : main.c                               */
/*      Deskripsi : Driver Abstract Data Type Tabel             */
/* */
/***************************************************************/

#include <stdio.h>
#include "tabel.h"

int main()
{ /*Program Utama*/
    /*Kamus Lokal*/
    arr T;
    int i;
    /*Algoritma*/
    CreateEmpty(T);
    printf("isEmpty(TI T) = %d\n",isEmpty(T));
    printf("IsFull(TI T) = %d\n",IsFull(T));
    printf("NBElement(TI T) = %d\n",NBElement(T));

    SetElementTabel(T,10);
    printf("isEmpty(TI T) = %d\n",isEmpty(T));
    printf("IsFull(TI T) = %d\n",IsFull(T));
    printf("NBElement(TI T) = %d\n",NBElement(T));

    return 0;
}
