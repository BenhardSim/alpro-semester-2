/*Nama File 	: UpahKerja.c*/
/*Deskripsi 	: menampilkan bilangan kerja sesuai GOL*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <08-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{

/*kamus*/
    int N; /*golongan*/
    int J; /*lama*/
    int i; /*selisih jam dengan 40*/
    int upah;

/*algoritma*/
    scanf("%d", &N);
    scanf("%d", &J);

    if (J > 0)
    {
        if(J > 40){
            i = J - 40;
            J = 40;

        }else{
            i = 0;
        }

        if (N == 1)
        {
            upah = 1000 * J + 1500*i;
        }
        else if (N == 2)
        {
            upah = 1500 * J + 2250*i;
        }
        else if (N == 3)
        {
            upah = 2000 * J + 3000*i;
        }
        else if (N == 4)
        {
            upah = 2500 * J + 3750*i;
        }else{
            printf("inputan salah");
        }

    }else{
        printf("inputan salah");
    }

    printf("%d", upah);

    return 0;
}