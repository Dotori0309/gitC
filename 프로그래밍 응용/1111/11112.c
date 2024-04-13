#include <stdio.h>

int main(void){
	char *cstring = "abc";
	printf ("cstring: %p %s\n", cstring, cstring);
	
	cstring = "def";
	printf ("cstring: %p %s\n", cstring, cstring);
	
	cstring = "abc";
	printf ("cstring: %p %s\n", cstring, cstring);
}
