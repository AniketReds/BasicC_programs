//without using temporary variable

#include<stdio.h>
#include<stdlib.h>
void swap(int *,int *);
int main(int argc,char *argv[]){
	int a,b;
	if(argc!=3){
		printf("Arguements are not present.");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("\nBefore swapping , a=%d , b=%d",a,b);
	swap(&a,&b);
	return 0;
}
void swap(int *a,int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("\nAfter Swapping , a=%d , b=%d",*a,*b);
}