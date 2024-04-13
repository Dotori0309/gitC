// 데이터 파일에서 몸무게와 키를 읽어 비만을 체크하는 프로그램
#include <math.h> // sin() 함수 사용
#include <stdio.h>
typedef struct{
	char name [20];
	float height;
	float weight;
}STUDENT;

void main (){
	STUDENT st, *sp; // st는 .으로 접근, sp는 포인터니까 화살표로 접근 (주소는 화살표) 
	int i = 0;
	sp = &st; // sp가 구조체 변수 st의 주소를 갖는다.
	
	scanf ("%s %f %f", sp->name, &sp->height, &sp->weight);
	printf ("student name : %s\n", sp->name);
	printf ("Height : %3.1f \nWeight : %3.1f\n", sp->height, sp->weight);
	if ((sp->height - 109) + 10 <= sp->weight){
		printf ("You are fat.. You need diet!!!\n\n");
		//중략//
	}
}
	

