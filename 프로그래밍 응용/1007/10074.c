#include <stdio.h>

void main() {
    int i, num, sum=0;

    printf("Enter an integer : ");
    scanf("%d", &num);

    for (i = 0; i < num; i=i+2)
    {   
        sum += i;
    }
    printf("%d", sum);
}