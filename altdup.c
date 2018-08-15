#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a[100],n,i,j,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i =0; i < n; i++){
		for(j = i + 1; j < n;){
			if(a[j] == a[i]){
				for(k = j; k < n; k++){
					a[k] =a[k+1];
				}
				n--;
			}
			else
				j++;
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}