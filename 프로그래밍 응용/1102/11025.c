#include <stdio.h>
int main(){

    int inumber = 25;
    float fnumber = 34.5f;
    char ch = 'g';

    const int *ip = &inumber;
    const float *fp = &fnumber;
    const char *cp = &ch;

    printf("Address: %08p, Value: %d\n", &inumber, *ip);
    printf("Address: %08p, Value: %.1f\n", &fnumber, *fp);
    printf("Address: %08p, Value: %d\n", &ch, *cp);
    return 0;
}
