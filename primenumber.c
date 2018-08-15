#include<stdio.h>
#include<stdlib.h>
int isPrime(int);
int main(void){
	int n,i;
	printf("\nEnter the Value of n:-\n");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(isPrime(i)==1){
			printf("%d,",i);
		}
	}
	return 0;
}
int isPrime(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}