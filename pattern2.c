/*
n=4(number of rows)
s=3(starting point)

3
44
555
6666
6666
555
44
3
*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n=4;
	int i,j;
	int s,k;
	for(i=1,s=3;i<=n;i++,s++){
		for(j=1;j<=i;j++){
			printf("%d",s);
		}
		printf("\n");
	}
	//printf("S:-%d",s);
	//printf("\n");
	for(i=n,k=s-1;i>=1;i--,k--){
		for(j=1;j<=i;j++){
			printf("%d",k);
		}
		printf("\n");
	}
}