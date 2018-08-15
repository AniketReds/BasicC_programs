#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main(int argc, char *argv[]){
	int n;
	int res;
	if(argc!=2){
		printf("No Arguements are given!!!");
		exit(0);
	}
	n=atoi(argv[1]);
	res=fact(n);
	printf("The Factorial of %d is %d",n,res);
	return 0;
}
int fact(int n){
	int f=1;
	int i;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}