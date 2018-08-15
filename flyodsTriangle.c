#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int n;
	int i,j,c;
	if(argc!=2){
		printf("No Arguements are Present.");
		exit(0);
	}
	n=atoi(argv[1]);
	c=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}