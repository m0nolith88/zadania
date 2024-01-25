#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void compare(char s1[],char s2[]) {

	if(strncmp(s1,s2,strlen(s1))==0 || strncmp(s2,s1,strlen(s2))==0) {
		int i;
		if(strlen(s1)>strlen(s2)){
			char new[strlen(s2)+1],odd[strlen(s2)-strlen(s1)+1]; int j=0;
			for(i=0; i<strlen(s2); i++) {
				if(s1[i]==s2[i]) {
					new[j]=s1[i];	
					j++;
				} else {
					break;
				}
			}
			int g=0;
			for(int k=strlen(s1);k<strlen(s2);k++){
				odd[g]=s2[k];
				g++;
			}
			odd[strlen(s2)-strlen(s1)+1]='\0';
			new[strlen(s2)+1] = '\0';
			printf("%s %s %s\n",s1,s2,odd);
		} else if(strlen(s2)>strlen(s1)){
			char new[strlen(s1)+1],odd[strlen(s2)-strlen(s1)+1]; int j=0;
			for(i=0; i<strlen(s1); i++) {
				if(s1[i]==s2[i]) {
					new[j]=s1[i];	
					j++;
				} else { 
					break;
				}
			}
			int g=0;
			for(int k=strlen(s1);k<strlen(s2);k++){
				odd[g]=s2[k];
				g++;
			}
			odd[strlen(s2)-strlen(s1)+1]='\0';
			new[strlen(s1)+1] = '\0';
			printf("%s %s %s\n",s1,s2,odd);
		}
	}
}


int compare2(char s1[],char s2[]){
	int len=strlen(s1),len1=strlen(s2);
	int k=0;
	while(k<len && k<len1 && s1[len-1-k]==s2[len1-1-k]){
		k++;	
	}
	return k;
}

