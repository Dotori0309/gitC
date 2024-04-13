#include <stdio.h>

void main(){
    char oper;
    int a, b, result;

    printf("연산자와 두 개의 피연사자를 입력하시오");
    scanf("%c %d %d", &oper, &a, &b);
    
    switch (oper)
    {
    case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result = a/b;
        break;
    case '%':
        result = a%b;
        break;
    
    default:
        break;
    }
}