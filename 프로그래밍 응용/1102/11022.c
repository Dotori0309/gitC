#include <stdio.h>
 
int main()
{
    int arrayA[3][3] = {35,24,67,94,12,54,66,34,71};
    int arrayB[3][3] = {50,63,25,48,21,88,87,16,42};
    int i, j;
 
 
    printf("A + B \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", arrayA[i][j] + arrayB[i][j]);
        }
        printf("\n");
    }
 
    printf("\nA - B \n");
    for(i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", arrayA[i][j]-arrayB[i][j]);
        }
        printf("\n");
    }
}
