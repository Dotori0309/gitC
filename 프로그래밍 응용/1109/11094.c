#include <stdio.h>

void star(int n);

void main(){
	int i, num;
	
	while(1){
		printf("enter: ");
		scanf("%d", &num);
		star(num);
		printf("\n");
		if(num==0) break;
	}
}

void star(int n){	
	if(n!=0) printf("*");
	else return 0;
	star(n-1);
}
