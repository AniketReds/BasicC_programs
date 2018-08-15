#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i;
	int sum=0;
	float avg;
	for(i=1;i<=argc;i++){
		sum=sum+atoi(argv[i]);
	}
	avg=(float)sum/(argc-1);
	printf("%.2f",avg);
	return 0;
}