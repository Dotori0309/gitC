#include <stdio.h>

void main(){
	int snum[5];
	char name[5][10];
	char ans[5][10];
	int cnt[5];
	int sco[5];
	char ca[5] = {1, 3, 2, 1, 4};
	FILE *fpin, *fpout;
	int i=0, j=0;
	
	fpin = fopen ("source.txt", "r");
	fpout = fopen ("result.txt", "w");
	
	while (!feof(fpin)){
		fscanf (fpin, "%d %s %s", &snum[i], name[i], ans[i]);
		i++;
	}
	
	for (i=0; i<5; i++)  {
        for (j=0; j<5-1; j++)  {
            if(ca[j]==ans[i][j]){
            	cnt[i] = cnt[i]+i;	
			}
        }
    }
    printf("=======================================\n");
  	printf("SNUM\tNAME\tCOUNT\tSCORE\n");
    printf("=======================================\n");
    for(i=0; i<5; i++);{
    	for (j=0; j<5-1; j++)  {
            if(sco[j]==ans[i][j]){
            	sco[i] = cnt[i]*20;
			}
        }
	}
	fprintf (fpout, "%d\t%s\t%d\t%d\n", snum, name, cnt, sco);
	fclose (fpin);
	fclose (fpout);
}
