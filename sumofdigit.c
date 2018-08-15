#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int n,a,s=0;
	if(argc!=2){
		printf("No arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	while(n!=0){
		a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}