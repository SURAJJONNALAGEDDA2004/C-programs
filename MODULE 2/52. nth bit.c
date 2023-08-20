#include<stdio.h>
main()
{ 
int a,b,c,d;
	printf("enter a number\n");
	scanf("%d",&a);
	printf("enter the bit you want to check\n");
	scanf("%d",&b);
	
	c=(a>>b);
	d=c&1;
	if(d=1){
		printf("set 1");
	}
	else {
		printf("unset 0");
	}
}
