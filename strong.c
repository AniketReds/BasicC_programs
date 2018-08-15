#include<stdio.h>
#include<stdlib.h>
int stron(int);
int main(int argc,char *argv[]){
	int n,res;
	if(argc!=2){
		printf("No Arguements are Given.");
		exit(0);
	}
	n=atoi(argv[1]);
	res=stron(n);
	if(res==n)
		printf("Strong Number");
	else
		printf("Not Strong Number");
	return 0;
}
int stron(int n){
	int a,f,s=0,i;
	while(n!=0){
		a=n%10;
		f=1;
		for(i=1;i<=a;i++){
			f=f*i;
		}
		s=s+f;
		n=n/10;
	}
	return s;
}