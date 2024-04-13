#include <stdio.h>

void main(void){
    int count=0;
    int i=1;

    for (i=1; i<=100; i++){
        if (i%3==0){
            printf("%d ",i);
            count++;
        }
        else if (count>=3){
            printf("\n");
            count = 0;
        }
    }
}