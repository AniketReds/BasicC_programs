#include<stdio.h>
#include<stdlib.h>
#define MAX 100
char *removespaces(char *);
int main(void){
	char str[MAX];
	char *newstr;
	printf("\nEnter the String:-");
	gets(str);
	
	printf("\nString before Trimming:- '%s' ",str);
	
	newstr=removespaces(str);
	
	printf("\nString after Trimming :- '%s' ",newstr);
	
	return 0;
}
char *removespaces(char *str){
	int i,j;
	char *newstr;
	newstr=(char*)malloc(MAX);
	i=0;
	j=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			newstr[j]=' ';
			j++;
			while(str[i]==' '){
				i++;
			}
		}
		newstr[j]=str[i];
		i++;
		j++;
	}
	newstr[j]='\0';
	return newstr;
}