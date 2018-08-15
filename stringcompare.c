#include<stdio.h>
#include<stdlib.h>
int comp(char [],char []);
int main(int argc,char *argv[]){
	int res;
	if(argc!=3){
		printf("No Arguements are present.");
		exit(0);
	}
	res=comp(argv[1],argv[2]);
	if(res==0)
		printf("Strings are Equal.");
	else
		printf("Strings are Not equal.");
	return 0;
}
int comp(char p1[100],char p2[100]){
	 int i=0;
	 while (p1[i] == p2[i]) {
      if (p1[i] == '\0' || p2[i] == '\0')
         break;
 
     i++;
   }
 
   if (p1[i] == '\0' && p2[i] == '\0')
      return 0;
   else
      return -1;
}