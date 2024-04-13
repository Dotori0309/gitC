#include <stdio.h>

void main(){
    char oper;
    int one, two;
    int result;

    while(1){
        printf("연산자 입력 : ");
        scanf("%c", &oper);
        if (oper == 'q') break;
        printf("첫 번째 수 입력 : ");
        scanf("%d", &one);
        printf("두 번째 수 입력 : ");
        scanf("%d", &two);

        switch (oper)
        {
        case '+':
            result = one+two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '-':
            result = one-two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '*':
            result = one*two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '/':
            result = one/two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        case '%':
            result = one%two;
            printf("%d %C %d = %d\n", one, oper, two, result);
            break;
        
        default:
            printf("Error");
            break;
        }
        getchar();
    }
    printf("\nEND");
}

/*
if (oper=='+') {
        result = one+two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='-') {
        result = one-two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='*') {
        result = one*two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='/') {
        result = one/two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
    else if (oper=='%') {
        result = one%two;
        printf("%d %C %d = %d", one, oper, two, result);
    }
*/
