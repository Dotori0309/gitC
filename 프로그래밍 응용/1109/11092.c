#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void finder(int *p_ary, int *p_max, int *p_min);

void main(){
	int ary[5];
	int j;
	srand(time(NULL));
	
	for(j=0; j<5; j++){ 
		ary[j] = rand();
	}
	
	int x = 0, n = 32767;
	finder(ary, &x, &n);
	printf("max: %d, min: %d", x, n);
}

void finder(int *p_ary, int *p_max, int *p_min){
	int i;
	
	for(i=0;i<5;i++){
		if(*p_max <= p_ary[i]){
			*p_max = p_ary[i];
		} 

		if(*p_min >= p_ary[i]){
			*p_min = p_ary[i];
		}
	}
}
