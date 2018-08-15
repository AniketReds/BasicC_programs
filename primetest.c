#include<stdio.h>
#include<stdlib.h>
int prime_check(int);
int main(int argc,char *argv[]){
	int n;
	int res;
	if(argc != 2){
		printf("No arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	res=prime_check(n);
	if(res==1)
		printf("\n %d is a prime number.",n);
	else
		printf("\n %d is not a prime number.",n);
	return 0;
}
int prime_check(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}