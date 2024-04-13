#include <stdio.h>
int searchMaxNumber (int x, int y, int z);
int searchMaxNumber (int x, int y, int z){
	if(x>y)
		if(x>z)
			return x;
		else if(x<z)
			return z;
	else
		if(y>z)
			return y;
		else if(y<z)
			return z;
}

int main (void){
	int a, b, c;
	printf("3개의 정수 입력 ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("가장 큰 수: %d ", searchMaxNumber(a,b,c));
}


