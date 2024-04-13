/*
2021년 12월 03일
선문대학교 컴퓨터공학부 2021243053 정승민
성적채점 프로그램
*/
#include <stdio.h>
#include <string.h>

void main(){
	char name[17][10]; 		// 이름을 저장할 char형 이중  배열 선언 
	char sm[17][20];		// 학과를 저장할 char형 이중 배열 선언 
	int num1[17];			// 학번을 저장할 int형 배열 선언  
	int num2[17];			// 학번을 저장할 int형 배열 선언
	int ans[17][10]={0};	// 정답을 저장할 int형 이중  배열 선언 및 초기화 
	int score[17]={0};		// 점수 
	
	int ANSWER[17];			// answer의 답을 저장하는 int형 배열 ANSWER 선언 
	int i, j;				// 반복문을 사용하기 위해 int형 변수 i, j 선언 
	
	// 학생 정보 및 제출답안 정보를 읽기 위한 코드 
	FILE *fpin;
	fpin = fopen ("source.txt", "r");	// read 형태로  source.txt 파일 오픈
	
	for(i=0;i<17;++i){		// source.txt 파일의 값을 배열에 저장하기 위한 반복문 
		fscanf(fpin, "%s %s %d-%d", &name[i], &sm[i], &num1[i], &num2[i]);
		for(j=0;j<10;++j){
			fscanf(fpin, "%d", &ans[i][j]);
		}
	}
	fclose(fpin);  
	
	// 정답 비교와 채점을 위해  answer.txt 파일 불러오기 위한 코드 
	FILE *fpout;
	fpout=fopen("answer.txt", "r");  // read 형태로  answer.txt 파일 오픈
	
	for(i=0;i<10;++i){
		fscanf(fpout, "%d", &ANSWER[i]);		// 정닶을  ANSWER 배열에 저장 
	}
	fclose(fpout);
	
	for(i=0;i<17;++i) {							// 제출 답안과 정답을 비교하여 맞은 문제에 +10점을 하기 위한 반복문 
		for(j=0;j<10;++j){
			if(ans[i][j] == ANSWER[j]){
				score[i]+=10;
			}
		}
	}
	
    // score 배열을 기준으로 교환 법칙을 이용하여 정렬하기 위한 코드 
	int temp;			// 임의로 사용할 int형 변수 temp 선언 
    char temp2[20];		// 임의로 사용할 char형 배열  temp2 선언 
    int k;				// 반복문을 사용하기 위한 int형 변수 k 선언 
    
	for(i=0;i<16;++i){
		for(j=i+1;j<17;++j){
			if(score[i]<score[j]){
				// 이름 정렬 
				strcpy(temp2, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp2);
				// 학과 정렬
				strcpy(temp2, sm[i]);
				strcpy(sm[i], sm[j]);
				strcpy(sm[j], temp2);
				// 학번 정렬
                temp = num1[i];
                num1[i] = num1[j];
                num1[j] = temp;
                // 학번 정렬
                temp = num2[i];
                num2[i] = num2[j];
                num2[j] = temp;
                // 정답 정렬 
                for(k=0; k<10; k++){
                    temp = ans[i][k];
                    ans[i][k] = ans[j][k];
                    ans[j][k] = temp;
                }
                // 점수 정렬 
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
			}
		}
	}
	
	int rank=1;	// 등수 저장 
	int a; 		// score 저장
	// rank 전까지의 출력	 
	printf("\t\t\t\t[ 채 점 결 과 ]\n");																	 
	printf("====================================================================================\n");		 
	printf("\t학과\t\t  성명\t\t  학번\t\t  성적\t       등수\n");											 
	printf("====================================================================================\n");		 
	for(i=0;i<17;++i)																						 
	{																									 
		printf("     %s", sm[i]);		 																			 
		if(strlen(sm[i])>10){																							
			printf("   \t%s", name[i]);																	 
		}
																									 
		else{																									 
			printf("          \t%s", name[i]);															 
		}
																											 
		printf("     \t%04d-%04d", num1[i], num2[i]);														 
		printf("          %d", score[i]);																	 
		
		// rank 후부터의 출력 
		// i=0을 제외하고 a와 score를 비교 후 다를 경우 +1 하여 rank 출력, 같을 경우 같은 등수로 출력 
		if(i==0){															 
			printf("\t\t%d\n", rank);								 
		}
																	 
		else if(a==score[i]){															 
			printf("\t\t%d\n", rank);								    
		}
																	 		
		else{															 
			++rank;												 
			printf("\t\t%d\n", rank);								 
		}	
																 
		a=score[i];											 
	}
	
    int count[4];	// 학생 수를 저장하기 위한 int형 배열 count 선언 
    int avg[4];		// 평균을 구하기 위해 int형 배열 avg 선언 
	
    printf("\n");																	 
	printf("====================================================================================\n");		 
	printf("\t학과\t\t  학생 수\t\t 평균\n");											 
	printf("====================================================================================\n");		 
	for(i=0;i<17;++i)									// 학생 수와 평균을 구하기 위한 반복문													 
	{
        if(strcmp(sm[i], "Computer")==0){
            count[0]+=1;
            avg[0]+=score[i];
        }
		else if(strcmp(sm[i], "Electricity")==0){
            count[1]+=1;
            avg[1]+=score[i];
        }
        else if(strcmp(sm[i], "Business")==0){
            count[2]+=1;
            avg[2]+=score[i];
        }
        else if(strcmp(sm[i], "Art")==0){
            count[3]+=1;
            avg[3]+=score[i];
        }
    }
    
	printf("      Computer\t\t    %d\t\t\t  %.1f\n", count[0], (float)avg[0]/(float)count[0]);
	printf("      Electricity\t    %d\t\t\t  %.1f\n", count[1], (float)avg[1]/(float)count[1]);
	printf("      Business\t\t    %d\t\t\t  %.1f\n", count[2], (float)avg[2]/(float)count[2]);
	printf("      Art\t\t    %d\t\t\t  %.1f\n", count[3], (float)avg[3]/(float)count[3]);
	
	// 채점결과표를  result.txt 파일에 출력하기 위한 코드 
	FILE *fp;
	fp=fopen("result.txt", "w"); // write 형태로  result.txt 파일 오픈 
	
	rank=0;						// result.txt에 출력하기 위해 rank 변수를 0으로 초기화 
	// rank 전까지의 출력
    fprintf(fp, "\t\t\t\t[ 채 점 결 과 ]\n");																	 
	fprintf(fp, "====================================================================================\n");		 
	fprintf(fp, "\t학과\t\t  성명\t\t  학번\t\t  성적\t       등수\n");											 
	fprintf(fp, "====================================================================================\n");		 
	for(i=0;i<17;++i)																						 
	{																										 
		fprintf(fp, "     %s", sm[i]);																		 
		if(strlen(sm[i])>10){																							 
			fprintf(fp, "   \t\t%s", name[i]);																	 
		}
		
		else if(strlen(sm[i])<4){
			fprintf(fp, "                 \t\t%s", name[i]);
		}
																										 
		else{																									 
			fprintf(fp, "                 \t%s", name[i]);															 
		}
																											 
		fprintf(fp, "     \t%04d-%04d", num1[i], num2[i]);
		fprintf(fp, "               %d", score[i]);
		
		// rank 후부터의 출력
		// i=0을 제외하고 a와 score를 비교 후 다를 경우 +1 하여 rank 출력, 같을 경우 같은 등수로 출력 
		if(i==0){
			fprintf(fp, "\t         %d\n", rank);
		}
		
		else if(a==score[i]){
			fprintf(fp, "\t         %d\n", rank);
		}
		
		else{
			++rank;
			fprintf(fp, "\t         %d\n", rank);
		}
		
		a=score[i];
	}
																		 
	fprintf(fp, "====================================================================================\n");		 
	fprintf(fp, "\t학과\t\t  학생 수\t\t 평균\n");											 
	fprintf(fp, "====================================================================================\n");		 
	for(i=0;i<17;++i)																						 
	{
        if(strcmp(sm[i], "Computer")==0){
            count[0]+=1;
            avg[0]+=score[i];
        }
		else if(strcmp(sm[i], "Electricity")==0){
            count[1]+=1;
            avg[1]+=score[i];
        }
        else if(strcmp(sm[i], "Business")==0){
            count[2]+=1;
            avg[2]+=score[i];
        }
        else if(strcmp(sm[i], "Art")==0){
            count[3]+=1;
            avg[3]+=score[i];
        }
    }
    
	fprintf(fp, "      Computer\t\t    %d\t\t  %.1f\n", count[0], (float)avg[0]/(float)count[0]);
	fprintf(fp, "      Electricity\t\t    %d\t\t  %.1f\n", count[1], (float)avg[1]/(float)count[1]);
	fprintf(fp, "      Business\t\t    %d\t\t  %.1f\n", count[2], (float)avg[2]/(float)count[2]);
	fprintf(fp, "      Art\t\t\t    %d\t\t  %.1f\n", count[3], (float)avg[3]/(float)count[3]);
	
    fclose(fp); 

}
