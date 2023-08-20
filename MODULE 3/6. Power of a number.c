#include<stdio.h>
#include<math.h>
int power(int a, int b);
main()
{
	int a,b,c;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("enter the power you want to find\n");
	scanf("%d",&b);
	c=power(a,b);
	printf("the answer is %d",c);
}
int power(int a, int b){
	int d;
	d=pow(a,b);
	return(d);
	
}
