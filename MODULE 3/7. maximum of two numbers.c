#include<stdio.h>
int max(int a,int b);
main()
{
	int a,b,c;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	c=max(a,b);
	printf("largest number is %d",c);
}
int max(int a, int b){
	int d;
	if(a>b){
		return a;
	}
	else{
	return b;
}
}
