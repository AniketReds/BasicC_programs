#include<stdio.h>
#include<stdlib.h>
int check(int );
int main(int argc,char *argv[]){
	int n;
	int res;
	if(argc!=2){
		printf("No Arguements are given.");
		exit(0);
	}
	n=atoi(argv[1]);
	res=check(n);
	if(res==1)
		printf("%d is odd.",n);
	else
		printf("%d is even.",n);
	return 0;
}
int check(int n){
	if(n%2==1)
		return 1;
	else
		return 0;
}