#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(void){
	char hex[100];
	int val,i,len,decimal;
	printf("Enter the Hexadecimal Number:-");
	gets(hex);
	len=strlen(hex);
	len--;
	decimal=0;
	for(i=0;hex[i]!='\0';i++){
		if(hex[i]>='0' && hex[i]<='9')
			val=hex[i]-48;
		else if(hex[i]>='A' && hex[i]<='Z')
			val=hex[i]-65+10;
		else if(hex[i]>='a' && hex[i]<='z')
			val=hex[i]-97+10;
		
		decimal+=(val*pow(16,len));
		len--;
	}
	printf("The Decimal Number is %d",decimal);
}