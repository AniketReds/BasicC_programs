#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check_number(char []);
int check_prime(int);
float find_sqrt(int);
float find_trunc(float);
int main(int argc,char *argv[]){
	int res,n,res1;
	float val,final_val;
	res=check_number(argv[1]);
	if(res==1){
		n=atoi(argv[1]);
		res1=check_prime(n);
		if(res1==1){
			val=find_sqrt(n);
			final_val=find_trunc(val);
			printf("%.2f",final_val);
		}
		else{
			printf("0.00");
		}
	}
	else{
		printf("Error!!Only Number can be taken as an input.");
	}
	return 0;
}
int check_number(char str[]){
	int i,len;
	len=strlen(str);
	for(i=0;i<len;i++){
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
			return 0;
			break;
		}
	}
	return 1;
}
int check_prime(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}
float find_sqrt(int n){
	float i;
	float j=0.000001;
	for(i=1;i<=n;i=i+j){
		if((i*i)>n){
			i=i-j;
			break;
		}
	}
	return i;
}
float find_trunc(float val){
	int f;
	val=val*100.0;
	f=val;
	val=(float)f/100.0;
	return val;
}