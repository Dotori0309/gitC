#include <stdio.h>

void main() {
    int i, num, num1, sum=0;

    printf("Please enter the first positive number :");
    scanf("%d", &num);
    printf("Please enter the second positive number :");
    scanf("%d", &num1);

    for (i = num; i <= num1; i=i+2)
    {   
        sum += i;
    }
    printf("Answer : %d", sum);
}