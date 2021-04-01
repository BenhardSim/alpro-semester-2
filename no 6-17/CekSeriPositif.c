/*Nama File 	: CekseriPositif.c*/
/*Deskripsi 	: menampilkan tahanan jika di tangkap*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <07-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main(){
/*Kamus*/
    int a,b,c;
    int hasil;

/*Kamus*/
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a > 0 && b > 0 && c > 0){
        hasil = a+b+c;
        printf("%d",hasil);
    }else{
        printf("masukkan tidak boleh negatif");
    }


    return 0;
}