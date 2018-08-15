#include<stdio.h>
#include<stdlib.h>
int pal(int);
int main(int argc , char *argv[]){
	int n,m,res;
	if(argc!=2){
		printf("No Arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	m=n;
	res=pal(n);
	if(res==m)
		printf("%d is a Palindrome Number.",m);
	else
		printf("%d is not a Palindrome Number.",m);
	return 0;
}
int pal(int n){
	int sum=0;
	int a;
	while(n!=0){
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	return sum;
}