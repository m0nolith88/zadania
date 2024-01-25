#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "getlenght.c"

#define ENTRIES 200


int main(int argc,char *argv[]) {
	char s1[50],s2[50]; bool first=false;
	int len=0; int len1; int count=0;
	FILE *fp = fopen("napisy.txt","rw");
	for(int i=0; i<ENTRIES; i++) {	
		fscanf(fp,"%s %s",s1,s2);
		len=lenght(s1); len1=lenght(s2);
		if(len>=3*len1 || len1>=3*len) {
			if(first==false) {
				printf("%s %s\n",s1,s2);
				first=true;
			}
			count++;
		}
	}	
	printf("Liczba takich: %d\n",count);
}
