/*
1112
3222
3334
*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n=3,c=n-1;
	int i,j;
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d",c);
			c++;
		}
		for(j=1;j<=n;j++){
			printf("%d",i);
		}
		if(i%2!=0){
			printf("%d",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}