#include <stdio.h>

int main(void){
	char *ps, string[80];
	ps = string;
	int i;
	
	printf("Please enter sentence: ");
	gets(ps);
	
	for(i=0; i<80; i++){
		if(i='\0'){	
			puts(ps);
		}
	}
}
