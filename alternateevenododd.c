#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int c=0,i,even=0,odd=0;
	char *num=argv[1];
	printf("%s\n",argv[1]);
	while(*(argv[1]+c)){
		c++;
	}
	for(i=0;i<c;i++){
		printf("\n%c",num[i]);
	}
	printf("\n");
	for(i=0;i<c;i++){
		printf("%c ",argv[1][i]);
	}
	for(i=0;i<c;i++){
		if(num[i]>='0' && num[i]<='9'){
			if((num[i]-'0')%2==0){
				printf("\nEven is %d",(num[i]-'0'));
				even=even+(num[i]-'0');
			}
			else{
				printf("\nOdd is %d",(num[i]-'0'));
				odd=odd+(num[i]-'0');
			}
		}
	}
	printf("\nSum of even Numbers:-%d",even);
	printf("\nSum of odd Numbers:-%d",odd);
	return 0;
}