#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int str_pal(char *);
int main(int argc,char *argv[]){
	int len;
	int flag;
	if(argc!=2){
		printf("No Arguemensts are Present.");
		exit(0);
	}
	flag=str_pal(argv[1]);
	if(flag==0)
		printf("%s is Not Palindrome.",argv[1]);
	else
		printf("%s is Palindrome .",argv[1]);
	return 0;
}
int str_pal(char *str1){
	char *str2;
	str2=str1+strlen(str2)-1;
	while(str1<str2){
		if(*str1++ != *str2--)
			return 0;
	}
	return 1;
}