#include<stdio.h>
#include<stdlib.h>
int hcf(int ,int);
void swap(int,int);
int main(void){
	int a,b;
	int res;
	printf("\nEnter the two Numbers:-");
	scanf("%d %d",&a,&b);
	
	res=hcf(a,b);
	printf("GCD of %d and %d is %d",a,b,res);
	return 0;
}
int hcf(int a , int b){
	if(b!=0)
		return hcf(b,a%b);
	else if(a<b)
		swap(a,b);
	else
		return a;
}
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}