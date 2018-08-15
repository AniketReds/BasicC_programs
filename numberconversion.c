#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void d2b(int);
void b2d(int);
void d2o(int);
void o2d(int);
void d2h(int);
void h2d(char [],int);
int main(void){
	int ch,len;
	long n;
	char hex[20];
	do{
		printf("\n1.Decimal to Binary.");
		printf("\n2.Binary to Decimal.");
		printf("\n3.Decimal to Octal.");
		printf("\n4.Octal to Decimal.");
		printf("\n5.Decimal to Hexadecimal.");
		printf("\n6.Hexadecimal to Decimal.");
		printf("\n0.For Exit.");
		printf("\nEnter Your Choice:-");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter the Number:-");
				scanf("%ld",&n);
				d2b(n);
				break;
				
			case 2:
				printf("\nEnter the Number containing 0's and 1's(maximum upto 10 digits):-");
				scanf("%d",&n);
				b2d(n);
				break;
				
			case 3:
				printf("\nEnter the Decimal Number:-");
				scanf("%d",&n);
				d2o(n);
				break;
				
			case 4:
				printf("\nEnter the Octat Number:-");
				scanf("%d",&n);
				o2d(n);
				break;
				
			case 5:
				printf("\nEnter the Decimal Number:-");
				scanf("%d",&n);
				d2h(n);
				break;
				
			case 6:
				printf("\nEnter the Hexadecimal Number:-");
				printf("%s",&hex);
				len=strlen(hex);
				h2d(hex,len);
				break;
				
			case 0:
				break;
				
			default:
				printf("\nInvalid Choice!!!!");
		}
	}
	while(ch!=0);
}
void d2b(int n){
	long remainder,base=1,binary_number=0;
	while(n>0){
		remainder=n%2;
		binary_number=binary_number+remainder*base;
		base=base*10;
		n=n/2;
	}
	printf("\nThe Binary Number is %ld\n",binary_number);
}
void b2d(int n){
	int decimal_number=0,base=1,remainder;
	while(n>0){
		remainder=n%10;
		decimal_number=decimal_number+remainder*base;
		base=base*2;
		n=n/10;
	}
	printf("\nThe Decimal Number is %d\n",decimal_number);
}
void d2o(int n){
	long octat_number[100],i=0,j;
	while(n!=0){
		octat_number[i++]=n%8;
		n=n/8;
	}
	printf("\nThe Octat Number:-");
	for(j=i-1;j>=0;j--){
		printf("%d",octat_number[j]);
	}
	printf("\n");
}
void o2d(int n){
	int i=0,decimal_number=0;
	while(n!=0){
		decimal_number=decimal_number+(n%10)*pow(8,i++);
		n=n/10;
	}
	printf("\nThe Decimal Number is %d \n",decimal_number);
}
void d2h(int n){
	char hexadecimal_number[100];
	int remainder;
	int i=0;
	int j;
	while(n!=0){
		remainder=n%16;
		if(remainder<10)
			hexadecimal_number[i++]=48+remainder;
		else
			hexadecimal_number[i++]=55+remainder;
		
		n=n/16;
	}
	printf("\nThe Hexadecimal number is ");
	for(j=i-1;j>=0;j--){
		printf("%c",hexadecimal_number[j]);
	}
	printf("\n");
}
void h2d(char num[100],int n){
	int i,val;
	int decimal_number=0;
	n=n-1;
	for(i=0;num[i]!='\0';i++){
		if(num[i]>='0' && num[i]<='9')
			val=num[i]-48;
		else if(num[i]>='A' && num[i]<='Z')
			val=num[i]-55;
		else if(num[i]>='a' && num[i]<='z')
			val=num[i]-87;
		decimal_number=decimal_number+val*pow(16,n);
		n--;
	}
	printf("\nThe Decimal Number is %d\n",decimal_number);
}