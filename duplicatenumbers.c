#include<stdio.h>
int main(void){
	int arr[20],n,i,j,k;
	printf("\nEnter the size of the arrays:-");
	scanf("%d",&n);
	printf("\nEnter the values of the Array:-");
	for(i=0;i<n;i++){
		printf("\nValue of arr[%d]:-",i);
		scanf("%d",&arr[i]);
	}
	printf("\nThe Unique List:-");
	for (i = 0; i < n; i++) {
      for (j = i + 1; j < n;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < n; k++) {
               arr[k] = arr[k + 1];
            }
            n--;
         } else
            j++;
      }
   }
 
   for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
 
   return (0);
}