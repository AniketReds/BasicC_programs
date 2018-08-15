#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int n,i,even=0,odd=0,c=0,arr[10],a;
	n=atoi(argv[1]);
	while(n>0){
		a=n%10;
		arr[c++]=a;
		n=n/10;
	}
	for(i=c-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=c-1;i>=0;i--){
		if(arr[i]%2==0){
			printf("\nEven is %d",arr[i]);
			even=even+arr[i];
		}
		else{
			printf("\nOdd is %d",arr[i]);
			odd=odd+arr[i];
		}
	}
	printf("\nSum of Even numbers is %d",even);
	printf("\nSum of Odd numbers is %d",odd);
	return 0;
}