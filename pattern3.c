/*
1
22
333
4444
55555
4444
333
22
1
*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n,i,j,k,s;
	printf("\nEnter the Value of n:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	for(s=n-1;s>=1;s--){
		for(k=1;k<=s;k++){
			printf("%d",s);
		}
		printf("\n");
	}
	return 0;
}