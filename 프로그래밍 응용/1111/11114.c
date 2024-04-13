#include <stdio.h>

int main(void){
	char *ps, string[80];
	ps = string;
	
	printf("Please enter sentence: ");
	gets(ps);
	puts(ps);
	
	printf("Please enter sentence: ");
	ps = gets(string);
	puts(ps);
	puts(string);
}
