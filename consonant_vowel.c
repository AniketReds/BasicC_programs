#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void check(char *);
int main(void){
	char str[MAX];
	printf("\nEnter the string:-");
	gets(str);
	
	check(str);
	return 0;
}
void check(char *str){
	int i,j,k,len1,len2;
	char vowel[MAX],cons[MAX];
	i=0;
	j=0;
	k=0;
	while(str[i]!='\0'){
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u'){
			vowel[j++]=str[i];
		}
		else{
			cons[k++]=str[i];
		}
		i++;
	}
	vowel[j]='\0';
	cons[k]='\0';
	len1=strlen(vowel);
	len2=strlen(cons);
	for(i=0;vowel[i]!='\0';i++){
		if(i<len1-1){
			printf("%c,",vowel[i]);
		}
		else{
			printf("%c ",vowel[i]);
		}
	}
	printf("\n");
	for(i=0;cons[i]!='\0';i++){
		if(i<len2-1){
			printf("%c,",cons[i]);
		}
		else{
			printf("%c ",cons[i]);
		}
	}
}