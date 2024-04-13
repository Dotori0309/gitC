#include <stdio.h>

int sum(int first, int second);

void main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d", num1, num2, sum(num1,num2));
}

int sum(int first, int second){
    return first+second;
}