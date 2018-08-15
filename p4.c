#include<stdio.h>
int main(void){
	int n;
	for(n=12345;printf("%d\n",n)-2;n/=10);
	return 0;
}