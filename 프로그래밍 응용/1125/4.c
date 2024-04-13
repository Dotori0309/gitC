#include <stdio.h>

void main(){
	int i;
	char df[50]={0,};
	
	FILE *fpin;
	fpin = fopen ("Datafile.txt", "r");
	
	while(!feof (fpin)){
		for(i=df-1; i>=0; i--){
			fgets(df, sizeof(df), fpin);
			puts(df);
			break;
		}
	}
	
	fclose (fpin);
}
