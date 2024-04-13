#include <stdio.h>
#include <string.h>

typedef struct student{
	char name[20];
	int age[5];
	char country[5];
	char department[3];
}STUDENT;

	
void main() {
	FILE *fpin;
	fpin = fopen("data.txt", "r");
	STUDENT s1[20];
	int j=0;
	while(!feof (fpin)){
		fscanf(fpin, "%s %d %s %s" , s1[j].name, &s1[j].age, s1[j].country, s1[j].department);
		++j; 
	}
	fclose(fpin);
	
	int i, num;
	char num1[20];
	int num2[20];
	char num3[20];
	char num4[20];
	printf("1. NAME\n");
	printf("2. AGE\n");
	printf("3. COUNTRY\n");
	printf("4. DEPARTMENT\n");
	printf("5. QUIT\n");
	printf("Please Enter Menu Number:");
	scanf("%d", &num);
	
	if(num==1){
		printf("Enter the student name: ");
		scanf("%s", &num1);
		for(i=0; i<20; i++){
			if(strcmp(num1, s1[i].name)==0){
				printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
			}
		}
	}
	
	if(num==2){
		printf("Enter the student age: ");
		scanf("%d", &num2);
		for(i=0; i<20; i++){
			if(strcmp(num2, s1[i].age)==0){
				printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
			}
		}
	}
	
	if(num==3){
		printf("Enter the student country: ");
		scanf("%s", &num3);
		for(i=0; i<20; i++){
			if(strcmp(num3, s1[i].country)==0){
				printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
			}
		}
	}
	
	if(num==4){
		printf("Enter the student department: ");
		scanf("%s", &num4);
		for(i=0; i<20; i++){
			if(strcmp(num4, s1[i].department)==0){
				printf("%s %d %s %s\n", s1[i].name, s1[i].age, s1[i].country, s1[i].department);
			}
		}
	}
	
	if(num==5){
		printf("프로그램이 종료됩니다.\n");
		exit(0);
	}
}

