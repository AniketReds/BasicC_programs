#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void replace(char *,char *,char *);
int main(void){
	char o_string[MAX],s_string[MAX],r_string[MAX];
	printf("\nEnter the Original String:-");
	gets(o_string);
	printf("\nEnter the Search String:-");
	gets(s_string);
	printf("\nEnter the Replace String:-");
	gets(r_string);
	replace(o_string,s_string,r_string);
	printf("\nThe Replaced String is:-");
	puts(o_string);
	return 0;
}
void replace(char *o_string, char *s_string , char *r_string){
	char buffer[MAX];
	char *ch;
	
	ch=strstr(o_string,s_string);
	if(!ch)
		return;
	
	strncpy(buffer,o_string,ch-o_string);
	buffer[ch-o_string]=0;
	
	sprintf(buffer+(ch-o_string),"%s%s",r_string,ch+strlen(s_string));
	
	o_string[0]=0;
	strcpy(o_string,buffer);
	
	return replace(o_string,s_string,r_string);
}