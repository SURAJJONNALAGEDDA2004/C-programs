#include<stdio.h>
int add(int a, int b);
main()
{
	int a,b,res;
	printf("enter your first number");
	scanf("%d",&a);
	printf("enter your second number");
	scanf("%d",&b);
	res=add(a,b);
	printf("%d",res);
}
int add(int a, int b){
	return(a+b);
}
