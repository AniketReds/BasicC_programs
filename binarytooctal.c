#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[]){
	int n,m,base=1,rem,oct_num=0;
	if(argc!=2){
		printf("No arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	m=n;
	while(n!=0){
		rem=n%10;
		oct_num=oct_num+rem*base;
		base=base*2;
		n=n/10;
	}
	printf("The equivalent octat number of %d is %lo",m,oct_num);
	return 0;
}