#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i,min,arr[argc];
	for(i=0;i<argc;i++){
		arr[i]=atoi(argv[i+1]);
	}
	min=arr[0];
	for(i=0;i<argc-1;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("%d",min);
	return 0;
}