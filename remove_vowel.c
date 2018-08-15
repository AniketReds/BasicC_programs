#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rem_v(char *);
int main(void){
	char str[100];
	printf("Enter the String:-");
	gets(str);
	rem_v(str);
	return 0;
}
void rem_v(char *ch){
	while(*ch !='\0'){
		if(*ch !='a' && *ch !='e' && *ch !='i' && *ch !='o' && *ch !='u'){
			printf("%c",*ch);
		}
		ch++;
	}
}