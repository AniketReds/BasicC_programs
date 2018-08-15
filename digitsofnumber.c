#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int n,c=0,a,arr[10],i;
	n=atoi(argv[1]);
	while(n!=0){
		a=n%10;
		arr[c++]=a;
		n=n/10;
	}
	for(i=c-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}