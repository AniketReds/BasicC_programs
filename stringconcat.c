#include<stdio.h>
#include<stdlib.h>
void str_concat(char [],char []);
int main(int argc,char *argv[]){
	if(argc!=3){
		printf("No Arguements are Given.");
		exit(0);
	}
	str_concat(argv[1],argv[2]);
	return 0;
}
void str_concat(char p1[100],char p2[100]){
	char p3[100];
	int i,j;
	i=0;
	j=0;
	while(p1[i]!='\0'){
		p3[i]=p1[i];
		i++;
	}
	while(p2[j]!='\0'){
		p3[i]=p2[j];
		i++;
		j++;
	}
	p3[i]='\0';
	printf("\nThe Concated String is:-");
	puts(p3);
}