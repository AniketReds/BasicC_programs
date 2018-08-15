#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i,j,k,coef=1,n;
	if(argc!=2){
		printf("No Arguements are Present.");
		exit(0);
	}
	n=atoi(argv[1]);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			if(i==0 || j==0)
				coef=1;
			else
				coef=coef*(i-j+1)/j;
			printf("%4d",coef);
		}
		printf("\n");
	}
	return 0;
}