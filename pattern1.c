/*    \
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/


#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n=5;
	int num,k,l,temp;
	int i,j;
	num=1;
	l=1;
	k=num;
	for(i=1;i<=n;i++){
		k=num-1;
		for(j=1;j<=num;j++){
			if(j%2==0)
				printf("*");
			else{
				if(i%2==0){
					temp=k+l-num+i;
					printf("%d",temp);
					l++;
					k=k-2;
				}
				else{
					printf("%d",l);
					l++;
				}
			}
		}
		num=num+2;
		printf("\n");
	}
	return 0;
}