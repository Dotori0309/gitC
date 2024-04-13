#include <stdio.h>

int main(void){
	int i;
	int ary[10];
	int tot = 0;
	int max = 0;
	double avg;
	
	for(i =0; i<10; i++){
		printf("Please enter a score: ");
		scanf("%d", &ary[i]);
		tot += ary[i];
		
		if( max > ary[i])
		max = max;
		else if (max <= ary[i])
		max = ary[i];
	}
	avg = tot / 10.0;
	
	printf("avg: %.1f\n", avg);
	printf("max: %d\n", max);
}
