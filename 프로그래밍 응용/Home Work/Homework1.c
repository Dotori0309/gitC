/*
2021년 11월 13일
선문대학교 컴퓨터공학부 2021243053 정승민
2진수 계산기 
*/
#include <stdio.h>

int Number(int num);					// 10진수를 2진수로 변환하기 위해 Number함수 선언 

int main(){
    int num;							// 정수를 저장할 수 있는 int형 변수 num 선언  

    printf("정수입력 (8~15) : ");		// 정수를 입력받기 위한 메세지와 정수의 범위를 화면에 출력
    scanf("%d", &num);					// 사용자로부터 정수(10진수)를 입력받아서 num변수에 대입

    Number(num);						// Number함수를 main으로 호출 
}

int Number(int num){					// 10진수를 2진수로 변환하기 위한 Number함수 
    if(num<2){							// num의 값이 0 또는 1일 경우 
    	printf("2진수 값 : %d", num);	// num의 값(2진수)  출력 
	}
 
    else{
        Number(num/2);					// num을 2로 나눈 값을 매게변수로 사용하여 재귀함수 호출 
        printf("%d", num%2);			// num을 2로 나눈 뒤의 나머지를 출력 
    }
}
