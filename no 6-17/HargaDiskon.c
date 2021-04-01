/*Nama File 	: HargaDiskon*/
/*Deskripsi 	: menampilkan harga setelah diskon*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <08-03-2021>*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
  char ch;
  int i;
/*Algoritma*/
  printf("jenis : ");
  scanf(" %c", &ch);
  printf("Harga : ");
  scanf("%d", &i);

  if (i > 200 && i < 10000)
  {
    if (ch == 'A')
    {
      i = 0.9 * i;
    }
    else if (ch == 'B')
    {
      i = i * 0.85;
    }
    else if (ch == 'C')
    {
      i = i * 0.8;
    }
  }else{
    printf("inputan salah");
  }

  printf("harga setelah diskon : Rp. %d",i);

  return 0;
}