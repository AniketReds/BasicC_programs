#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main(int argc,char *argv[]){
	int n,r;
	float ncr,npr;
	n=atoi(argv[1]);
	r=atoi(argv[2]);
	if(n>=r){
		ncr=(float)(fact(n)/(fact(r)*fact(n-r)));
		npr=(float)(fact(n)/fact(n-r));
	}
	else{
		printf("\nError!!");
	}
	printf("NCR=%.2f NPR=%.2f",ncr,npr);
	return 0;
}
int fact(int n){
	int f,i;
	if(n==0)
		return 1;
	else{
		f=1;
		for(i=1;i<=n;i++){
			f=f*i;
		}
	}
	return f;
}