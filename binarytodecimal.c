#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int n,m,base=1,decimal_number=0,rem;
	if(argc!=2){
		printf("No arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	m=n;
	while(n!=0){
		rem=n%10;
		decimal_number=decimal_number+base*rem;
		base=base*2;
		n=n/10;
	}
	printf("The Equivalent decimal number of %d is %d ",m,decimal_number);
	return 0;
}