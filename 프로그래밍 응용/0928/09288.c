#include <stdio.h>

void main(void){
    char oper;
    int a, b, result;
    int operError = 0;

    printf("산술연산자와 두개의 피연산자를 입력하시오: ");
    scanf("%c %d %d",&oper,&a,&b);

    switch (oper)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0){
            result = a / b;
        }
        else {
            operError = 2;
        }
        break;
    case '%':
        if (b != 0){
            result = a % b;
        }
        else {
            operError = 2;
        }
        break;
    
    default:
        operError = 1;
        break;
    }

    if (operError == 0){
        printf("%d %c %d = %d",a,oper,b,result);
    }
    else if (operError == 1){
        printf("잘못 입려된 연산자입니다.");
    }
}