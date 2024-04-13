/*
사원 번호/ 시간당 급여/ 의료 보험/ 재형 저축/ 근무 시간/ 초과 시간
1000 			500 		O 		5000 		155 		13
1001 			500 		X 		3000 		208 		36
1002 			400 		O 		7000 		188 		21
1003 			300 		O 		0 			197 		41
1004 			400 		X 		7000 		213 		17
*/
#include <stdio.h>
#include <string.h>

typedef struct people{
	int name;
	int money;
	char tf[10];
	int mm;
	int time;
	int ot;
}PEOPLE;

void main(){
	FILE *fpin;
	fpin = fopen("data3.txt", "r");
	PEOPLE p1[10];

	int i=0;
	while(!feof (fpin)){
		fscanf(fpin, "%d %d %s %d %d %d" , &p1[i].name, &p1[i].money, p1[i].tf, &p1[i].mm, &p1[i].time, &p1[i].ot);
		i++;
	}

	int fmoney;
	int tu[20];
	int j, temp;
   	char temp2[20];

	for(i=0; i<5; i++){
		if(strcmp( p1[i].tf, "X")==0){
			fmoney = ((p1[i].time - p1[i].ot)*p1[i].money+(p1[i].ot*1.3*p1[i].money) - p1[i].mm);
			tu[i] = fmoney - (fmoney*0.005);
		}
		if(strcmp( p1[i].tf, "O")==0){
			fmoney = ((p1[i].time - p1[i].ot)*p1[i].money+(p1[i].ot*1.3*p1[i].money) - p1[i].mm);
			tu[i] = fmoney - ((fmoney*0.005) + (fmoney*0.001));
		}	
		
		
	}

	printf("사원 번호/ 시간당 급여/ 의료 보험/ 재형 저축/ 근무 시간/ 초과 시간/ 총 급여\n");
	for(i=0; i<5; i++){
		for(j=i+1;j<6;++j){
			if(tu[i] < tu[j]){ 
				temp = p1[i].name;
                p1[i].name = p1[j].name;
                p1[j].name = temp;

            	temp = p1[i].money;
                p1[i].money = p1[j].money;
                p1[j].money = temp;

				strcpy(temp2, p1[i].tf);
				strcpy(p1[i].tf, p1[j].tf);
				strcpy(p1[j].tf, temp2);
            
            	temp = p1[i].mm;
                p1[i].mm = p1[j].mm;
                p1[j].mm = temp;

            	temp = p1[i].time;
                p1[i].time = p1[j].time;
                p1[j].time = temp;

            	temp = p1[i].ot;
                p1[i].ot = p1[j].ot;
                p1[j].ot = temp;

				temp = tu[i];
				tu[i] = tu[j];
				tu[j] = temp;
			}
		}
			
	}
	printf("  %d\t      %d\t   %s\t    %d\t%d\t    %d\t    %d\n" , p1[0].name, p1[0].money, p1[0].tf, p1[0].mm, p1[0].time, p1[0].ot, tu[0]);
	printf("  %d\t      %d\t   %s\t    %d\t%d\t    %d\t    %d\n" , p1[1].name, p1[1].money, p1[1].tf, p1[1].mm, p1[1].time, p1[1].ot, tu[1]);
	printf("  %d\t      %d\t   %s\t    %d\t%d\t    %d\t    %d\n" , p1[2].name, p1[2].money, p1[2].tf, p1[2].mm, p1[2].time, p1[2].ot, tu[2]);
	printf("  %d\t      %d\t   %s\t    %d\t%d\t    %d\t    %d\n" , p1[3].name, p1[3].money, p1[3].tf, p1[3].mm, p1[3].time, p1[3].ot, tu[3]);
	printf("  %d\t      %d\t   %s\t    %d\t\t%d  \t    %d\t    %d\n" , p1[4].name, p1[4].money, p1[4].tf, p1[4].mm, p1[4].time, p1[4].ot, tu[4]);
	fclose(fpin);
}
