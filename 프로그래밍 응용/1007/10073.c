#include <stdio.h>

void main(){
    int num, sum=0, count=0;
    float avg;

    while (1)
    {
        printf("Enter the number : ");
        scanf("%d", &num);
        if (num==0) break;
        else{
            sum = sum+num;
            count++;
        }
    }
    avg = (float)sum / (float)count;    //강제 형변환, Casting
    printf("Average of %d numbers : %.1f" ,count, avg);
    
}