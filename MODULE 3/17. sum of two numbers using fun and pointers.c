#include<stdio.h>
main()
{ 
    int a,b,*p,*q,r;
	printf("enter the first value");
	scanf("%d",&a);
	printf("enter the second value");
	scanf("%d",&b); 
	p=&a;
	q=&b;
	r=sot(&a,&b);
	printf("the sum of the two nummbers is %d",r);	
}
int sot(int *p,int *q){
	return(*p + *q);
}
