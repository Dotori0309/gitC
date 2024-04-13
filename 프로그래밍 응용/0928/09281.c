#include <stdio.h>

void main(){
    int num;
    printf("Please enter integer: ");
    scanf("%d", &num);

    if(num%2==0) 
    {
    printf("%d is an even number.", num);
    }
    else if(num%2!=0) 
    {
    printf("%d is an odd number.", num);
    }
    else if(num==0) 
    {
    printf("zero");
    }
}