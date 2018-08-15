//using temporary variable

#include<stdio.h>
#include<stdlib.h>
void swap(int ,int );
int main(int argc,char *argv[]){
	int a,b;
	if(argc!=3){
		printf("No arguements are given.");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("Before Swapping , a=%d and b=%d",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter Swapping , a=%d and b=%d",a,b);
}