#include<stdio.h>
#include<stdlib.h>
int main(void){
	FILE *fp;
	char ch;
	fp=fopen(__FILE__,"r");
	do{
		ch=getc(fp);
		putchar(ch);
	}
	while(ch!=EOF);
	fclose(fp);
	return 0;
}