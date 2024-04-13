#include <stdio.h>
typedef struct{
	char name[20];
	int english;
	int math;
	float average;
}STUDENT;

void main(){
	STUDENT st;
	
	printf("Please enter student name : ");
	gets(st.name);
	
	printf("Please enter english score : ");
	scanf("%d", &st.english);
	
	printf("Please enter math score : ");
	scanf("%d", &st.math);
	
	st.average = (float)(st.english + st.math) / 2;
	
	printf("student name: %s\n", st.name);
	printf("average: %5.2f\n", st.average);
}
