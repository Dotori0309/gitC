#include <stdio.h>
 
int main(){
    int student[2][5];
    int i, j;
    int engsum=0, mathsum=0;
    double engavg=0, mathavg=0;
    
    for(i=0; i<2; i++){
    	if(i==0){
	    	printf("English score\n");
			for(j=1; j<6; j++){
				printf("학생 %d 점수 입력(5명초과X): ", j);
				scanf("%d", &student[i][j]);
				engsum += student[i][j];
			}
			printf("*************************************\n\n");
		}
		if(i==1){
			printf("Math score\n");
			for(j=1; j<6; j++){
				printf("학생 %d 점수 입력(5명초과X): ", j);
				scanf("%d", &student[i][j]);
				mathsum += student[i][j];
			}
			printf("*************************************\n\n");
		}
	}
	engavg = engsum / 5.0;
	mathavg = mathsum / 5.0;
	printf("평균을 계산중입니다\n\n");
	printf("engavg: %.1f\n", engavg);
	printf("mathavg: %.1f\n\n", mathavg);

	printf("영어 과목 평균 점수 : %d\n", engsum / 5);
	
	printf("수학 과목 평균 점수 : %d\n", mathsum / 5);
	
	 
	
	printf("학생들 개인평균점수\n");
	
	printf("학생1의 평균점수 : %.1f\n", (float)(student[0][0]+student[1][0])/2);
	
	printf("학생2의 평균점수 : %.1f\n", (float)(student[0][1]+student[1][1])/2);
	
	printf("학생3의 평균점수 : %.1f\n", (float)(student[0][2]+student[1][2])/2);
	
	printf("학생4의 평균점수 : %.1f\n", (float)(student[0][3]+student[1][3])/2);
	
	printf("학생5의 평균점수 : %.1f\n", (float)(student[0][4]+student[1][4])/2);
}
