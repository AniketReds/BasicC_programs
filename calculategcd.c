#include<stdio.h>
#include<stdlib.h>
int gcd_find(int,int);
int main(int argc,char *argv[]){
	int a,b,res;
	if(argc!=3){
		printf("No arguements are present.");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	if(a>b)
		res=gcd_find(a,b);
	else
		res=gcd_find(b,a);
	printf("The gcd of %d and %d is %d.",a,b,res);
	return 0;
}
int gcd_find(int a,int b){
	int temp;
	if(b==0)
		return a;
	else
		return (gcd_find(b,a%b));
}