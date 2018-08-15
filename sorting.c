#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void sortedmerge(int *,int,int *,int,int*);
void sort(int *,int);
int main(void){
	int a[MAX],b[MAX];
	int n,m;
	int i;
	int *res;
	printf("\nEnter the number of elemets of the First Array:-");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Value of a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the Number of elements of the Second array:-");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		printf("Value of b[%d]:-",i);
		scanf("%d",&b[i]);
	}
	res=(int*)malloc(100*sizeof(int));
	sortedmerge(a,n,b,m,res);
	return 0;
}
void sortedmerge(int *a,int n,int *b,int m,int *res){
	int i=0,j=0,k=0;
	while(i<n){
		*(res+k)=*(a+i);
		k+=1;
		i+=1;
	}
	while(j<m){
		*(res+k)=*(b+j);
		k+=1;
		j+=1;
	}
	sort(res,m+n);
	printf("\nArrays after Sorting:-\n");
	for(i=0;i<m+n;i++){
		printf("\nValue of res[%d]:-%d",i,*res);
		res++;
	}
}
void sort(int *res , int n){
	int i,j;
	int *temp;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(*(res+j)>*(res+j+1)){
				*temp=*(res+j);
				*(res+j)=*(res+j+1);
				*(res+j+1)=*temp;
			}
		}
	}
}