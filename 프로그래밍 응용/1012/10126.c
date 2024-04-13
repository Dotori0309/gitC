#include <stdio.h>

float nemo(float nemo);
float one(float one);
float semo(float semo, float semo1);

void main(){
    char a;
    float s ,s1;

    while (1){
        printf("Rectangle, Circle, Triangle의 첫 문자를 입력: ");
        scanf("%c" , &a);

        if (a=='q'||'Q'){
            printf("프로그램 종료");
            break;
        }

        else{
            switch(a){
                case 'R':
                    printf("정사각형의 한변의 길이: ");
                    scanf("%f" , &s);
                    printf("%.1f\n" , nemo(s));
                    break;
                case 'C':
                    printf("원의 반지름 길이: ");
                    scanf("%f" , &s);
                    printf("%.1f\n" , one(s));
                    break;
                case 'T':
                    printf("삼각형의 밑변: ");
                    scanf("%f" , &s);
                    printf("삼각형의 높이: ");
                    scanf("%f" , &s1);
                    printf("%.1f\n" , semo(s , s1));
                    break;
                default:
                    printf("도형의 표기가 잘못되었습니다.");
                    break;
                }   
            getchar();
        } 
    }
   
   
}


float nemo(float nemo){
   return nemo*nemo;
}

float one(float one){
   return one*one*3.14;
}

float semo(float semo, float semo1){
   return semo * semo1 * 0.5;
}






