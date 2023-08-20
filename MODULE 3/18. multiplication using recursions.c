#include<stdio.h>
main()
{
	int a,b,r;
	printf("enter your first value");
	scanf("%d",&a);
	printf("enter your second value");
	scanf("%d",&b);
	r=mul(a,b);
	printf("the result of multiplication is %d",r);
}
int mul(int a, int b){
	if(a==0 || b==0){
		return 0;
	}
	else{
		return(a+mul(a,b-1));
	}
}
