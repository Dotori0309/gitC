#include <stdio.h>

long power(int a, int b);

void main(){
	int num1, num2;
	
	printf("두 수를 입력 하시오 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d의 %d승 : %d\n", num1, num2, power(num1, num2));
	return 0;
}

long power(int a, int b){
	if(b==0) return 1;
	return a*power(a, b-1);
}
