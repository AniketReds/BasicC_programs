#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[]){
	int a,b,i;
	int gcd,lcm;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	if(a>b){
		for(i=b;i>=1;i--){
			if(a%i==0 && b%i==0){
				gcd=i;
				break;
			}
		}
	}
	else{
		for(i=a;i>=1;i--){
			if(a%i==0 && b%i==0){
				gcd=i;
				break;
			}
		}
	}
	lcm=(a*b)/gcd;
	printf("GCD=%d and LCM=%d",gcd,lcm);
	return 0;
}