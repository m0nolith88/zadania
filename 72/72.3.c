#include "check.c"
#include <stdio.h>

int main(int argc,char *argv[]) {
	char s1[50],s2[50];
	int min=100,max=0,current;
	FILE *fp=fopen("napisy.txt","rw");
	for(int i=0;i<200;i++){
		fscanf(fp,"%s %s",s1,s2);
		current = compare2(s1,s2);
		if(current<min) {
			min=current;
		}
		if(current>max) {
			max=current;
		}
		if(current==15) {
			printf("%s %s\n",s1,s2);
		}
	}
	printf("Max:%d\n",max);
}
