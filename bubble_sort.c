#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i,j,temp;
	int arr[argc];
	for(i=1;i<=argc-1;i++){
		arr[i]=atoi(argv[i]);
	}
	for(i=1;i<=argc-1;i++){
		for(j=1;j<=argc-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=1;i<=argc-1;i++){
		printf("%d ",arr[i]);
	}
}