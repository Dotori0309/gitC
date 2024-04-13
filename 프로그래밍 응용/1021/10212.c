#include <stdio.h>

void ffor(int i, int j);
void ffor(int i, int j){
    if (j<=i*2-1){
        printf("%d",j);
    }
    else printf(" ");

}

int main(void){
    int i, j;
    for(i=1; i<6; i++){
        for(j=1; j<10; j++){
            ffor(i, j);
        }
        printf("\n");
    }

}


