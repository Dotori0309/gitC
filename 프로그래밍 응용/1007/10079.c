#include <stdio.h>

void main(){
    int i, j, num=6;

    for (i = 0; i < num; i++)
    {
        for (j = num-1; j > i ; j--) printf(" ");
        for (j = 0; j < 2*i+1; j++) printf("*");
        printf("\n");
        
    }
    
}