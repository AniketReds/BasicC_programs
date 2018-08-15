#include<stdio.h>
int main(void){
	int real,imag;
	printf("Enter the Complex number:-\n");
	scanf("%d+i%d",&real,&imag);
	printf("(%d,%d)",real,imag);
	return 0;
}