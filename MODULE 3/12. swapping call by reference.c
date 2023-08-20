#include<stdio.h>
main()
{
	int a,b;
printf("enter the first value");
scanf("%d",&a);
printf("enter the second value");
scanf("%d",&b);
swap(&a,&b);
}
int swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("after swapping a=%d and b=%d",*a,*b);
}

