#include <stdio.h>
float calculate_F(float degree);
float C, F;

void main(){
    printf("¼·¾¾¿Âµµ(Centigrade): ");
    scanf("%f", &C);
    F = calculate_F(C);
    printf("[È­¾¾¿Âµµ(Fanherenheit)] : %.2f",F);
}
float calculate_F (float degree){

F = (9.0/5.0) * C + 32;
    return F;
}
