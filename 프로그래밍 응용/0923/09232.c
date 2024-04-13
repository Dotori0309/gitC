#include <stdio.h>

void main(){
    int num;

    printf("Please enter integer: ");
    scanf("%d", &num);

    if(num%2>0) printf("%d positive", num);
    else if ((num%2)<0) printf("%d negative", num);
    else printf("%d is zero", num);
}