
#include<stdio.h>main()
main()
{
	int a,s,r;
	printf("enter your number");
	scanf("%d",&a);
	s=0;
	while(a>0){
		
		s=s+(a%10);
		a=a/10;
		
	}
printf("the sum of the digits in given number is %d",s);
}
