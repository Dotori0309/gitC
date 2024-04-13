#include <stdio.h>

void test(int *pa);

int main(){
	int ary[5] = {1, 2, 3, 4, 5};
	test(ary);
}

void test(int *pa){
	int i ;
	for(i=0; i<5; i++){
//		printf("%d\t", pa[i]);
//		printf("%d\t", pa + i + 1);
		printf("%d\t", *(pa+i));
	}
}
