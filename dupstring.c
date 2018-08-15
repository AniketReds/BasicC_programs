#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char s[100];
	int i,j,k,len;
	printf("Enter the String:-");
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++){
		for(j=i+1;j<len;){
			if(s[i]==s[j]){
				for(k=j;k<len;k++){
					s[k]=s[k+1];
				}
				len--;
			}
			else{
				j++;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%c",s[i]);
	}
	return 0;
}