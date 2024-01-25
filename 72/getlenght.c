#include <stdio.h>
#include <string.h>
#include <ctype.h>

int lenght(char s[]) {
	int len=0;
	for(int i=0;i<=strlen(s);i++){
		if(islower(s[i])!=0){
			len++;
		} else if(islower(s[i])==0) {
			break;
		}
	}
	return len;
}

