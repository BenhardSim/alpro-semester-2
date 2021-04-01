/*Nama File 	: KelBil.c*/
/*Deskripsi 	: Mencari KPK dari suatu array*/
/*Pembuat   	: <Benhard simanullang-24060120140136>*/
/*Tgl Pembuatan	: <24-03-2021>*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/

int main()
{
  /*Kamus*/
  int arr[3];
  int i, N;
  int result, size;
  /*algoritma*/
  size = 3;
  printf("Array bil =  ");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &N);
    arr[i] = N;
  }

  int m = arr[0];

  while (1)
  {

    for (i = 0; i < size; i++)
    {
      if (m % arr[i])
        break;
    }
    if (i == size)
      break;
    m++;
  }
  result = m;

  printf("maka KPK nya adalah %d.\n", result);

  return 0;
}
