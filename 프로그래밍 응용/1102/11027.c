#include <stdio.h>

int main(){
    int inumber;
    int *ip;
    ip = &inumber;
    
    printf("Please enter a integer : ");
    scanf("%d", &inumber);

    inumber = inumber*2;
    
    printf("Multiplied integer is : %d\n", *ip);
    return 0;
}