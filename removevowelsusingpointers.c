#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
#define TRUE 1
#define FALSE 0
int check_vowel(char);
int main(void){
	char str[MAX];
	char *temp,*pointer,*start;
	char ch;
	printf("\nEnter the String:-");
	gets(str);
	temp=str;
	pointer=(char*)malloc(100);
	while(pointer==NULL){
		printf("\nUnable to allocate Memory.\n");
		exit(EXIT_FAILURE);
	}
	start=pointer;
	while(*temp){
		ch=*temp;
		if(!check_vowel(ch)){
			*pointer=ch;
			*pointer++;
		}
		*temp++;
	}
	*pointer='\0';
	pointer=start;
	strcpy(str,pointer);
	free(pointer);
	
	printf("\nString after removing the Vowels.:-");
	puts(str);
	return 0;
}
int check_vowel(char a){
	if(a>='A' && a<='Z')
		a=a+'a'-'A';
	
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
		return TRUE;
	
	return FALSE;
}