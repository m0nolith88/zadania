#include "check.c"
#include <stdio.h>

int main(int argc,char *argv[]) {
	char s1[50],s2[50];
	FILE *fp=fopen("napisy.txt","rw");
	for(int i=0;i<200;i++){
		fscanf(fp,"%s %s",s1,s2);
		compare(s1,s2);
	}
}
