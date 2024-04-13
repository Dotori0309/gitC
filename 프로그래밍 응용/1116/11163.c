#include <stdio.h>
#include<string.h>

void main(){
	char text1[20] = "this is a text";
	char text2[20] = "which is red.";
	
	strcat(text1, text2);
	printf("%s\n", text1);
} 
