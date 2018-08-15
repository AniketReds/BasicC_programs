#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[]){
	float n,i,j;
	if(argc!=2){
		printf("No Arguements are Present.");
		exit(0);
	}
	n=atof(argv[1]);
	j=0.00001;
	for(i=0;i<=n;i=i+j){
		if((i*i)>n){
			i=i-j;
			break;
		}
	}
	printf("The square root of %f is %.2f",n,i);
	return 0;
}