#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i,arr[argc],max;
	for(i=0;i<argc;i++){
		arr[i]=atoi(argv[i+1]);
	}
	max=arr[0];
	for(i=0;i<argc-1;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("%d",max);
	return 0;
}