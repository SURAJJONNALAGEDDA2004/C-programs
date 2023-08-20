#include<stdio.h>
main()
{
	int a=10,b=20;
	sum(&a,&b);
}
int sum(int *a, int *b){
	int res;
	res=*a+*b;
	printf("the result is %d",res);
}
