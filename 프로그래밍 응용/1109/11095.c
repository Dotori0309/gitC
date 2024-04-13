#include <stdio.h>

void integer(int n);

void main(){
	int num;
	
		printf("enter: ");
		scanf("%d", &num);
		integer(num);
}

void integer(int n){
	if(n<=100){
		printf("%d\n", n);
	}
	else return 0;
	integer(n+1);
}
