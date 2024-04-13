#include <stdio.h>

void main(){
    char num1;

    while (1)
    {
    printf("소문자 입력: ");
    scanf(" %c", &num1);
    if (num1=='Q'){
            break;
        }
    printf("대문자 출력: %c\n", num1-32);
    getchar();
    }
/*
    while (1)
    {
        printf("소문자 입력: ");
        scanf(" %c", &num1);
        if (num1=='Q'){
            break;
        }
        if (num1<'a'||num1>'z'){
            continue;
        }
        printf("대문자 출력: %c\n", num1-32);
        
    }*/
    
}