#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void sprawdz(char s1[]) {
	int counter=0; bool in=false,checked=false;
	for(int i=0; i<strlen(s1)-1; i++) {
		if((s1[i])!=' ') {	
			in=true;
			if(s1[i]==s1[i+1] && checked==false && in==true) {
				counter++;
				checked=true;
			}
		}else if((s1[i])==' ') {
			in=false;
			checked=false;
		}
	}
	printf("Wystepuje %d razy.\n",counter);
}

int main(int argc,char *argv[]) {
	FILE *fp=fopen("tekst.txt","rb");
	if(fp==NULL) {
		printf("Nie mozna otworzyc pliku!\n");
		return -1;
	}
	fseek(fp,0L,SEEK_END);
	int rozmiar = ftell(fp);
	printf("%d\n",rozmiar);
	rewind(fp);
	char tekst[rozmiar];
	fread(tekst,sizeof(char),rozmiar,fp);
	sprawdz(tekst);
}
