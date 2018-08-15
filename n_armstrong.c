#include<stdio.h>
#include<stdlib.h>
int armstrong_check(int);
int main(int argc,char *argv[]){
	int n,m,res,i;
	if(argc !=2){
		printf("No arguements are present.");
		exit(0);
	}
	n=atoi(argv[1]);
	for(i=1;i<=n;i++){
		m=i;
		res=armstrong_check(i);
		if(res==m){
			printf("%d ",m);
		}
	}
	return 0;
}
int armstrong_check(int n){
	int c=0,m,f,s=0,i,a;
	m=n;
	while(n>0){
		c++;
		n=n/10;
	}
	n=m;
	while(n!=0){
		a=n%10;
		f=1;
		for(i=1;i<=c;i++){
			f=f*a;
		}
		s=s+f;
		n=n/10;
	}
	return s;
}