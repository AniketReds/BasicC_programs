#include<stdio.h>
#include<stdlib.h>
int isPrime(int);
int main(int argc,char *argv[]){
	int a,b;
	int i;
	if(argc!=3){
		printf("Arguements are Not present.");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	for(i=a;i<=b;i++){
		if(isPrime(i)==1){
			printf("%d ",i);
		}
	}
	return 0;
}
int isPrime(int n){
	int i;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}