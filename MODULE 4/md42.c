#include<stdio.h>
main()
{
	int d,i,c=0,e=0;
	char a[100];
	printf("enter the string");
	scanf("%s",&a);
	printf("enter the character you want to search");
	scanf(" %c",&d);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==d){
			printf("the character is found at a[%d]\n",i+1);
			c++;
		}
	}
	printf("no of times found is %d\n",c);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==d){
			e++;
			if(e==c-1){
			printf("the last but one occurence is at a[%d]\n",i+1);
			}}
	}
	}
	
