#include <stdio.h>

float getAverage(int *Array, int count);

void main(){
	int ary[10];
	int i, c=0;

	for(i=0; i<10; i++){
		printf("10개 이하의 정수 입력: ");
		scanf("%d", &ary[i]);
	
		if(ary[i]==0) break;
		else{
			c++;
		}	
	}
	printf("avg: %.1f", getAverage(ary, c));
}

float getAverage(int *Array, int count){
	int i;
	float sum=0, avg;
	
	for(i=0; i<count; i++){
  		sum+=Array[i];
	}
	avg = sum/(float)count;
	return avg;
}
