#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i,j,n,m;
	if(argc!=2){
		printf("No Arguements are Present.");
		exit(0);
	}
	n=atoi(argv[1]);
	for(i=1;i<=n;i++){
		for(j=1;j<=10;j++){
			m=i*j;
			printf("%d * %d = %d \n",i,j,m);
		}
		printf("\n\n\n");
	}
	return 0;
}