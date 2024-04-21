#include <stdio.h>

int main(void)
{
    int k = 0;
    int lion[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (k = 0; k < 20; k++)
    {
        printf("--- lion[%d] %d ---\n", k, lion[k]);
    }

    printf("마지막 원소에 저장할 수를 입력하시오.\n");
    scanf("%d", &lion[19]);

    for (k = 0; k < 20; k++)
    {
        printf("--- lion[%d] %d ---\n", k, lion[k]);
    }
    return 0;
}