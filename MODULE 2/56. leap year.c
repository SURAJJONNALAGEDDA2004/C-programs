#include<stdio.h>
main()
{
	int a;
	printf("enter the year you want to check");
	scanf("%d",&a);
	
	if(a%400==0){
		printf("it is a leap year");
	}
	else if(a%100==0){
		printf("it is not a leap year");
	}
	else if(a%4==0){
	printf("it is a leap year");
}
}
