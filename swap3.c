//using bitwise operator
 
#include<stdio.h>
#include<stdlib.h>
void swap(int *,int *);
int main(int argc,char *argv[]){
	int a,b;
	if(argc!=3){
		printf("No Arguements are present.");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("\nBefore swapping , a=%d and b=%d",a,b);
	swap(&a,&b);
	return 0;
}
void swap(int *a,int *b){
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
	printf("\nAfter swapping, a=%d and b=%d",*a,*b);
}