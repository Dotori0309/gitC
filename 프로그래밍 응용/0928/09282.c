#include <stdio.h>

void main(){
    int num;
    printf("Please enter integer : ");
    scanf("%d", &num);

    if(num>0) 
    {
    printf("positive.");
    }
    else if(num<0) 
    {
    printf("negative.");
    }
    else if(num==0) 
    {
    printf("zero");
    }
}