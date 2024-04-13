#include <stdio.h>

void main(){
    int num;
    float avg;

    while (1) {
        printf("Enter an integer : ");
        scanf("%d", &num);
        if (num==0) break;

        printf("%d의 약수는 : ", num);
        for(int i = 1; i <= num; i++) {
            if(num % i == 0) printf("%d ", i);
	    }
	printf("\n");
    }
}