#include <stdio.h>

void main(){
	int i, line=0, count;
	char df[50]={0,};
	 // 10문자로 구성된 배열 변수
	FILE *fpin; // 파일 포인터 변수의 선언
	fpin = fopen ("Datafile.txt", "r");
	
	while (!feof (fpin)){
		count =0;
		line++;
		fgets(df, sizeof(df), fpin);
		for(i=0; i<strlen(df); i++){
			if(df[i]=='a'){
				count +=1;
			}
		}
		printf("%d번째 줄의 a 갯수: %d\n", line, count);	
	}
	fclose (fpin);
}
