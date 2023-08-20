#include<stdio.h>
main()
{
	int a=10,b=20;
	swap(a,b);
}
int swap(int a,int b){
	int t;
	t=a;
	a=b;
	b=t;
	printf("after swapping a=%d and b=%d",a,b);
}

