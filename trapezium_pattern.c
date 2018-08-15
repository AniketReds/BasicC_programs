/*
1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11
*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n,i,j,k,l,m,space,number,num,temp;
	k=1;
	n=4;
	number=n;
	num=1;
	space=0;
	for(i=0;i<n;i++){
		for(j=1;j<=space;j++){
			printf("-");
		}
		for(m=1;m<(2*n-space);m++){
			if(m%2==0){
				printf("*");
			}
			else{
				printf("%d",num);
				num++;
			}
		}
		printf("*");
		for(l=1;l<(2*n-space);l++){
			if(l%2==0){
				printf("*");
			}
			else{
				temp=k+(number*number);
				printf("%d",temp);
				k++;
			}
		}
		number--;
		space=space+2;
		printf("\n");
	}
	return 0;
}