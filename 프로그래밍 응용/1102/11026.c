#include <stdio.h>
int main(){
    int inumber = 25;
    float fnumber = 34.5f;
    char ch = 'g';

    int *ip = &inumber;
    float *fp = &fnumber;
    char *cp = &ch;

    printf("Size of inumber is : %d, size of ip is : %d\n", sizeof(inumber), sizeof(ip));
    printf("Size of fnumber is : %d, size of fp is : %d\n", sizeof(fnumber), sizeof(fp));
    printf("Size of ch is : %d, size of cp is : %d\n", sizeof(ch), sizeof(cp));
    return 0;
}
