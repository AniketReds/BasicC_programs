#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[]){
	int n,m,rem,base=1,hexa_number=0;
	if(argc!=2){
		printf("Arguements are not present.");
		exit(0);
	}
	n=atoi(argv[1]);
	m=n;
	while(n!=0){
		rem=n%10;
		hexa_number=hexa_number+rem*base;
		base=base*2;
		n=n/10;
	}
	printf("The equivalent Hexadeciaml number of %d is %lx",m,hexa_number);
	return 0;
}