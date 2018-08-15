#include<stdio.h>
#include<stdlib.h>
int per(int);
int main(int argc, char *argv[]){
	int n;
	int res;
	if(argc!=2){
		printf("No Arguements are Present.");
		exit(0);
	}
	n=atoi(argv[1]);
	res=per(n);
	if(res==n)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
	return 0;
}
int per(int n){
	int i,s=0;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			s=s+i;
		}
	}
	return s;
}