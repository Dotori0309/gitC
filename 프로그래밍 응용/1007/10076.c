#include <stdio.h>

void main(void){
    int num1, num2, one, two;

    printf("Input two numbers : ");
    scanf("%d %d",&num1, &num2);

    if (num1>num2) {
        one = num2;
        two = num1;
    }
    else {
        one = num1;
        two = num2;
    }

    int temp = 1;
    int temp1 = one;

    while (temp<=9){
        temp1 = one;
        while (temp1 <= two){
            printf("%d X %d = %d\t", temp1, temp, temp1*temp);
            temp1++;
        }
        printf("\n");
        temp++;
    }
}