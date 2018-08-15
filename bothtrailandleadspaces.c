#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void removespaces(char *);
int main(void){
	char str[MAX];
	printf("\nEnter the String:-");
	gets(str);
	
	printf("\nString before Trimming:- '%s' ",str);
	
	removespaces(str);
	
	printf("\nString after Trimming :- '%s' ",str);
	
	return 0;
}
void removespaces(char *str){
	int index,i;
	index=0;
	while(str[index]==' ' || str[index]=='\t' || str[index]=='\n'){
		index++;
	}
	if(index!=0){
		i=0;
		while(str[index+i]!='\0'){
			str[i]=str[index+i];
			i++;
		}
	}
	str[i]='\0';
	index=-1;
	i=0;
	while(str[i]!='\0'){
		if(str[i]!=' ' && str[i]!='\t' && str[i]!='\n'){
			index=i;
		}
		i++;
	}
	str[index+1]='\0';
}