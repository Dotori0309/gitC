#include <stdio.h>

void circumference(int radius, double *circle);

void main(){
	int num;
	double c = 0;
	
	printf("원의 반지름을 입력: ");
	scanf("%d", &num);
	circumference(num, &c);
	printf("원의 둘레: %f\n", c);
}

void circumference(int radius, double *circle){
	*circle = 2*3.14*radius;
}
