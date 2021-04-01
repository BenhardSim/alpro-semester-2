#include <stdio.h>
#include <stdlib.h>
#include "tabel.h"

void callArr(int* arr){
    int size = sizeof(arr)/sizeof(int);
    int i;
    for(i = 0;i<size;i++){
        arr[i] = arr[i] + 10;
    }
}

int main()
{
    int a[3] = {4,6,9};
    int i;
    int size = sizeof(a)/sizeof(int);
    for(i = 0;i<3;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");
    callArr(a);
    for(i = 0;i<size;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
