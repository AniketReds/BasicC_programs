#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i,j,temp,max_sum=0,min_sum=0,arr[argc];
	for(i=0;i<=argc-1;i++){
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
	max_sum=arr[argc-1]+arr[argc-2];
	printf("MAXSUM:%d\n",max_sum);
	
	for(i=1;i<=argc-1;i++){
		for(j=1;j<=argc-i-1;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	min_sum=arr[argc-1]+arr[argc-2];
	printf("MINSUM:%d",min_sum);
	return 0;
}