#include <stdio.h>
#include <string.h>

typedef struct student{
	char name[20];
	int mt;
	int en;
}STUDENT;

	
void main() {
	FILE *fpin;
	FILE *fpout;
	fpin = fopen("data2.txt", "r");
	fpout = fopen("data22.txt", "w");
	
	STUDENT s1[20];
	
	
	int i=0;
	while(!feof (fpin)){
		fscanf(fpin, "%s %d %d " , s1[i].name, &s1[i].mt, &s1[i].en);
		//printf("%s %d %d " , s1[i].name, s1[i].mt, s1[i].en);
		i++; 
	}
	fclose(fpin);
	int j;
	char temp[20];
	int temp2;
	for(i=0;i<9;++i){
		for(j=i+1;j<10;++j){
			if(strcmp(s1[i].name, s1[j].name)>0){ 
				strcpy(temp, s1[i].name);
				strcpy(s1[i].name, s1[j].name);
				strcpy(s1[j].name, temp);
				
				temp2 = s1[i].mt;
                s1[i].mt = s1[j].mt;
                s1[j].mt = temp2;
                
                temp2 = s1[i].en;
                s1[i].en = s1[j].en;
                s1[j].en = temp2;
			}
		}
	}
	printf("이름 오름차순 출력\n");
	fprintf(fpout, "이름 오름차순 출력\n");
	for(i=0; i<10; ++i){
		printf("%s %d %d\n" , s1[i].name, s1[i].mt, s1[i].en);
		fprintf(fpout, "%s %d %d\n" , s1[i].name, s1[i].mt, s1[i].en);
	}
	
	for(i=0;i<9;++i){
		for(j=i+1;j<10;++j){
			if(s1[i].mt + s1[i].en < s1[j].mt + s1[j].en){ 
				strcpy(temp, s1[i].name);
				strcpy(s1[i].name, s1[j].name);
				strcpy(s1[j].name, temp);
				
				temp2 = s1[i].mt;
                s1[i].mt = s1[j].mt;
                s1[j].mt = temp2;
                
                temp2 = s1[i].en;
                s1[i].en = s1[j].en;
                s1[j].en = temp2;
			}
		}
	}
	printf("\n총점 내림차순 출력\n");
	fprintf(fpout, "\n총점 내림차순 출력\n");
	for(i=0; i<10; ++i){
		printf("%s %d %d\n" , s1[i].name, s1[i].mt, s1[i].en);
		fprintf(fpout, "%s %d %d\n" , s1[i].name, s1[i].mt, s1[i].en);
	}
	fclose(fpout);
}
