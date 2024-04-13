#include <stdio.h>

void main(){
    int i, j;
    int lineNumber=5;

    for( j=0; j<lineNumber; j++){
        for( i=0; i<(5-i-1)*2; i++){
            printf(" ");
        }
        for (i=0; i < 2*i+1; i++)
        {
            printf("\n");
        }
        
    }
}