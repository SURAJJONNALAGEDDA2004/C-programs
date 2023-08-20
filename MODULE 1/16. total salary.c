#include<stdio.h>
main()
{
	int b,hra,da,pf,lic,sum;
	
	printf("\n enter the basic pay");
	scanf("%d",&b);
	
	printf("\n enter the amount hra");
	scanf("%d",&hra);
	
	printf("\n enter the amount da");
	scanf("%d",&da);
	
	printf("\n enter the amount pf");
	scanf("%d",&pf);
	
	printf("\n enter the amount lic");
	scanf("%d",&lic);
	
	sum=b+hra+da+pf+lic;
	
	printf("\n the total salary of the employee is %d",sum);
	
}
