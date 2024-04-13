#include <stdio.h>
#include <process.h>

typedef struct{
	char name[15];
	char country[20];
	int age;
}STUDENT;

void main(){
	FILE *fp;
	STUDENT st[5] ;
	int i;
	
	if ((fp = fopen ("out.dat", "w")) == NULL) {
	printf ("File open error...\n");
	exit (-1);
	}
	
	for (i = 0; i < 5; i++) {
		printf ("Enter name & country & age : ");
		scanf ("%s %s %d", st[i].name, st[i].country, &st[i].age);
		fprintf (fp, "%s %s %d\n", st[i].name, st[i].country, st[i].age);
	}
	
	fclose (fp);
}
