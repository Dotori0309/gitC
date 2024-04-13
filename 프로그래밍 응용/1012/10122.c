#include <stdio.h>

void multiplicationTable(int init, int end);

void main(){
    int num1, num2;
    printf("두 수 입력 : ");
    scanf("%d %d", &num1, &num2);
    multiplicationTable(num1, num2);
}

void multiplicationTable(int init, int end){
    for (int i = 1; i <= 9; i++)
    {
        for (int j = init; j <= end; j++)
        {
            printf("%d x %d = %d\t", j, i, (i*j));
        }
        printf("\n");
    }
}