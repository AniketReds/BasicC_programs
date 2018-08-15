#include<stdio.h>
#include<stdlib.h>
int arms(int,int);
int main(int argc,char *argv[]){
	int n,c=0,m,res;
	if(argc!=2){
		printf("No Arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	m=n;
	while(m>0){
		c++;
		m=m/10;
	}
	//printf("Count: %d",c);
	res=arms(n,c);
	if(res==n)
		printf("\nArmstrong Number.");
	else
		printf("\nNot Armstrong Number.");
	return 0;
}
int arms(int n,int c){
	int i,f,s=0,a;
	while(n!=0){
		a=n%10;
		f=1;
		for(i=1;i<=c;i++){
			f=f*a;
		}
		s=s+f;
		//printf("\nS=%d",s);
		n=n/10;
	}
	return s;
}