#include <stdio.h>

int iiff(int x);
int iiff(int x){
    if(x%5 == 0){
    	return 1;
	} 
    else{
    	return 0;
	}
}

int ct(int y);
int ct(int y){
    return y/5;
}

int main(void){
    while(1){
        int num;
        
 		printf("정수 입력 : ");
        scanf("%d", &num);
        
        if(getchar() != '\n'){
        	break;
		}

        if(num<=0){
        	printf("NO\n\n");
		} 
        else if(iiff(num)==1){
            printf("OK, 총 개수 %d개\n\n",ct(num));
        }
        else{
        	printf("NO\n\n");	
		}
    }
    printf("종료");

}




