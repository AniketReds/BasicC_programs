#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char str1[100],str2[100];
	int res;
	printf("Enter the two Strings:-");
	gets(str1);
	gets(str2);
	res=strcmp(str1,str2);
	printf("Result: %d",res);
	return 0;
}