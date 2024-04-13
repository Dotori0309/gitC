#include <stdio.h>

int main(void){
    float cm, kg, bmi;
    printf("================<BMI 계산기>====================\n");
    printf("- 당신의 키(cm)와 체중(kg)을 입력하시오: ");
    scanf("%f %f",&cm,&kg);
    bmi = kg / (cm * cm * 0.0001);
    printf("- 당신의 BMI값은 %.1f입니다.\n",bmi);
    if (bmi <= 18.5) printf("- 저체중 상태입니다.\n");
    else if (bmi < 25.0) printf("- 정상의 체중입니다.\n");
    else if (bmi < 30.0) printf("- 과체중 상태입니다.");
    else printf("- 비만 상태입니다.\n");

    printf("================================================");

    return 0;
}