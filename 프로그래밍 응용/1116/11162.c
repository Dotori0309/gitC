#include <stdio.h>

char *ms(char *t1, const char *t2);

void main(){
    char text1[20] = "this is a text ";
	char text2[20] = "which is red.";
	char text[40];
	
    ms(text1, text2);
    puts(text1);
}

char *ms(char *t1, const char *t2){
    char *t = t1;
    
    while(*t1){
    	t1++;
	}	
	
    while(*t2){
    	*t1++ = *t2++;
    	*t1 = '\0';
	}
	if(t1=='\0') t1==' ';
	return t;
}