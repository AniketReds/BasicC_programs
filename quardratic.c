#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void root(int ,int ,int);
int main(int argc , char *argv[]){
	float a,b,c;
	if(argc!=4){
		printf("No Arguements are Present.");
		exit(0);
	}
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);
	root(a,b,c);
	return 0;
}
void root(int a,int b,int c){
	float d,root1,root2;
	d=(b*b)-(4*a*c);
	
	if(d<0){
		printf("\nRoots are Complex:-\n");
		printf("\n%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
		printf("\n%.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
	}
	else if(d==0){
		printf("\nRoots are Equal-\n");
		root1=(-b)/(2*a);
		root2=(-b)/(2*a);
		printf("\n%.3f\n",root1);
		printf("\n%.3f\n",root2);
	}
	else{
		printf("\nRoots are Real:-\n");
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("\n%.3f\n",root1);
		printf("\n%.3f\n",root2);
	}
}