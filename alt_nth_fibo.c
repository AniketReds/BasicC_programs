#include<stdio.h>
#include<stdlib.h>
int fibo(int);
int main(int argc , char *argv[]){
	int n;
	int res;
	if(argc!=2){
		printf("No arguements are Present.");
		exit(0);
	}
	n=atoi(argv[1]);
	if(n<0){
		printf("\nNo Negative term can be present in fibonacci series.");
	}
	else{
		res=fibo(n);
		printf("The %d term in fibonacci series is %d",n,res);
	}
	return 0;
}
int fibo(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return (fibo(n-1)+fibo(n-2));
}