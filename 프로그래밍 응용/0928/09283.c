#include <stdio.h>

void main(){
    int a, b;
    printf("Please enter the number: ");
    scanf("%d %d", &a, &b);

    if(a>b) 
    {
    printf("Difference is %d", a-b);
    }
    else if(a<b) 
    {
    printf("Difference is %d", b-a);
    }
    
}