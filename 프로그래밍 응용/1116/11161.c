#include <stdio.h>

int st(char *array);

void main(){
	char array[100];
	printf("Please enter the sentence : ");
	gets(array);
	
	printf("Length of sentence is : %d", st(array));
}

int st(char *array){
	int c=0, index=0;
	
	while(1){
		if(array[index]=='\0')	break;
		else{
			c++;
   		}
   		index++;
	}
	return c;
}
