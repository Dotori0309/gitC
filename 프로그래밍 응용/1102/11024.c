#include <stdio.h>

int main(){

    int inumber = 25;
    float fnumber = 34.5f;
    char ch = 'g';

    printf("Value of inumber is : %d, address of inumber is : %08p\n", inumber, &inumber);
    printf("Value of fnumber is : %.1f, address of fnumber is : %08p\n", fnumber, &fnumber);
    printf("Value of ch is : %c, address of ch is : %08p\n", ch, &ch);
    return 0;
}