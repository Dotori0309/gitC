#include <stdio.h>

int read_num();
int calculate_sum();

int read_num(){
    int rn;
    printf("Please enter a positive number: ");
    scanf("%d", &rn);

    return rn;
}

void main() {
 int first, second, sum;
    first = read_num();
    second = read_num();
    sum = calculate_sum (first, second);
    printf("Answer : %d", sum);
}

int calculate_sum(int first, int second){
    int sum = 0;
    for (int i = first; i < second+1; i++)
    {
        if (i%2==0)
        {
            sum += i;
        }
    }
    
    return sum;
}