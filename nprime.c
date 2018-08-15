#include<stdio.h>
#include<stdlib.h>
int prime_check(int);
int main(int argc , char *argv[]){
	int n,m,res,sum=0,i;
	if(argc!=2){
		printf("No Arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	m=n;
	i=2;
	while(n>0){
		res=prime_check(i);
		if(res==1){
			printf("\n%d",i);
			sum=sum+i;
		}
		i++;
		n--;
	}
	printf("\nThe Sum of %d prime numbers are %d.",m,sum);
	return 0;
}
int prime_check(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}