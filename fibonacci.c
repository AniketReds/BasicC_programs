#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[]){
	int a,b,c;
	int n;
	if(argc!=2){
		printf("No Arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	a=0;
	b=1;
	printf("%d %d ",a,b);
	n=n-2;
	while(n>0){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		n--;
	}
	return 0;
}