#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
int main(int argc,char *argv[]){
	float ar;
	float d,r;
	d=atof(argv[1]);
	r=d/2;
	ar=pi*r*r;
	printf("%.2f",ar);
	return 0;
}