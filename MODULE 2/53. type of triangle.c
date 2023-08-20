#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the first side\n ");
	scanf("%d",&a);
	printf("enter the second side\n ");
	scanf("%d",&b);
	printf("enter the third side\n ");
	scanf("%d",&c);
	
	if(a==b==c){
		printf("the triangle is an equilateral triangle");
	}
	else if((a==b)||(b==c)||(c==a)){
		printf("the triangle is an isoceles triangle");
	}
	else if(a!=b!=c){
		printf("the triangle is a scalene triangle");
	}
	}
