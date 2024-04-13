#include <stdio.h>
#include <string.h>

void main(){
    char *keyword[7]={"if", "while", "else", "for", "int", "float", "double"};
    char kw[8];
    int i=0;

    printf("키워드를 입력하시오: ");
    scanf("%s", &kw);

    for(i=0; i<7; i++){
        if(strcmp(kw, keyword[i])==0){
            printf("키워드입니다.\n");
            break;
        }
        else if(strcmp(kw, keyword[i])!=0){
            printf("키워드가 아닙니다.\n");
            break;
        }
    }
}