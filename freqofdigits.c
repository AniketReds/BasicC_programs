#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int n,i,a,c=0,count,arr[10],freq[10],j;
	n=atoi(argv[1]);
	while(n!=0){
		a=n%10;
		arr[c++]=a;
		n=n/10;
	}
	for(i=0;i<c;i++){
		freq[i]=-1;
	}
	for(i=0;i<c;i++){
		count=1;
		for(j=i+1;j<c;j++){
			if(arr[i]==arr[j]){
				count=count+1;
				freq[j]=0;
			}
		}
		if(freq[i]!=0){
			freq[i]=count;
		}
	}
	for(i=0;i<c;i++){
		if(freq[i]!=0){
			printf("\n%d occurs %d times.",arr[i],freq[i]);
		}
	}
	return 0;
}