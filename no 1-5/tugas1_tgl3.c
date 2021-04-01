#include <stdio.h>

int main(){
    
//  kamus
    int a,b,c;

// algoritma
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
	if(a + b > c && a + c > b && b + c > a){
		printf("yes");
	}else{
		printf("No");
	}

    return 0;
}
