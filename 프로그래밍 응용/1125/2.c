#include <stdio.h>

void main(){
	int i;
	char df[50]={0,};
	
	FILE *fpin;
	fpin = fopen ("Datafile.txt", "r");
	
	while(!feof (fpin)){
		for(i=0; i<10; i++){
			fgets(df, sizeof(df), fpin);
			puts(df);
			break;
		}
	}
	
	fclose (fpin);
}
