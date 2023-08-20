#include<stdio.h>
#include<math.h>
main()
{
	float ci,p,r,t,n,x,y;
	
	printf("\n enter the principal value");
	scanf("%f",&p);
	
	printf("\n enter the rate");
	scanf("%f",&r);
	
	printf("\n enter number of times");
	scanf("%f",&n);
	
	printf("\n enter the time");
	scanf("%f",&t);
	

	
	x=n*t;
	y=r/t;
	
	
	ci=p*pow((1+y),x);
	
	printf("\n the compound intrest is : %f",ci);
	
	
	
	
}
