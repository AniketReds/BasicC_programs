#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int n,count;
	int fib[3];
	fib[0]=0;
	fib[1]=1;
	if(argc!=2){
		printf("No arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	count=1;
	while(count<=n){
		fib[2]=fib[0]+fib[1];
		fib[0]=fib[1];
		fib[1]=fib[2];
	}
	printf("%d term in fibonacci series is %d",n,fib[0]);
	return 0;
}