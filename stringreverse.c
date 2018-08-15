#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[]){
	int len,i,j;
	char *s;
	s=argv[1];
	len=strlen(argv[1]);
	for(i=len-1;i>=0;i--){
		printf("%c",s[i]);
	}
	return 0;
}