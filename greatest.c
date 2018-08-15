#include<stdio.h>
#include<stdlib.h>
int great(int [],int );
int main(void){
	int n=10;
	int a[100];
	int i,max;
	printf("\nEnter the Numbers:-\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("\nThe Greatest Number is %d.",max);
	return 0;
}