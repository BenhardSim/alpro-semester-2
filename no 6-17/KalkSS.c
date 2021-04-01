/*Nama File 	: KalkSS.c*/
/*Deskripsi 	: membuat program kalkulator sederhana*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <08-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main(){

/*Kamus*/
    int iA;
    int iB;
    char pilihan;

/*Algoritma*/
    scanf("%d", &iA);
    scanf("%d", &iB);
    scanf("%c", &pilihan);
    scanf("%c", &pilihan);

    if(pilihan=='a'){
        printf("A+B= %d\n", iA+iB);
    }
    else if(pilihan=='b'){
        printf("A-B= %d\n", iA-iB);
    }
    else if(pilihan=='c'){
        printf("A*B= %d\n", iA*iB);
    }
    else if(pilihan=='d'){
        printf("A/B= %.3f\n", (float)iA/(float)iB);
    }
    else if(pilihan=='e'){
        printf("A/B= %d\n", iA/iB);
    }
    else if(pilihan=='f'){
        printf("A%B= %d\n", iA%iB);
    }
    else{
        printf("Bukan pilihan menu yang benar");
    }

return 0;
}
