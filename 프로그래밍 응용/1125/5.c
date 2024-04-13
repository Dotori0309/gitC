#include <stdio.h>
#include <string.h> 

void main(){
	char name[20][20];
	char fr[20][20];
	char sch[20][20];

	int num, i;
	int a=0, b=0, c=0, d=0;
	int age[4] = {0};
	int aage[20];
	
	FILE *fpin;
	fpin = fopen ("student.txt", "r");
	
	while(!feof (fpin)){
		fscanf(fpin, "%s %d %s %s" , name[num], &aage[num], fr[num], sch[num]); 
		num++;
	}

	for(i=0; i<14; i++){
		if(stricmp(fr[i], "KOR")==0){
			age[0]+=aage[i];
			a++;
		}
		else if(stricmp(fr[i], "USA") == 0){
			age[1]+=aage[i];
			b++;
		}
		else if(stricmp(fr[i], "JAP") == 0){
			age[2]+=aage[i];
			c++;
		}
		else if(stricmp(fr[i], "CHI") == 0){
			age[3]+=aage[i];
			d++;
		}
	}

	printf("KOR average age of students : %d\n", age[0]/a);
	printf("USA average age of students : %d\n", age[1]/b);
	printf("JAP average age of students : %d\n", age[2]/c);
	printf("CHI average age of students : %d\n", age[3]/d);

	age[0] = 0; age[1] = 0; age[2] = 0; age[3] = 0;
	a=0, b=0, c=0, d=0;
	
	for(i=0; i<14; i++){
		if(stricmp(sch[i], "CE")==0){
			age[0]+=aage[i];
			a++;
		}
		else if(stricmp(sch[i], "AE") == 0){
			age[1]+=aage[i];
			b++;
		}
		else if(stricmp(sch[i], "IE") == 0){
			age[2]+=aage[i];
			c++;
		}
		else if(stricmp(sch[i], "EE") == 0){
			age[3]+=aage[i];
			d++;
		}
	}

	printf("CE average age of students : %d\n" , age[0]/a);
	printf("EE average age of students : %d\n" , age[1]/b);
	printf("IE average age of students : %d\n" , age[2]/c);
	printf("AE average age of students : %d\n" , age[3]/d);

	fclose (fpin);
}
