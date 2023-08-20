#include<stdio.h>
main()
{
	int res,a,b;
	printf("enter the number you want to find the power");
	scanf("%d",&a);
	printf("enter the power ");
	scanf("%d",&b);
	res=pw(a,b);
	printf("the power is %d",res);
}
int pw(int a, int b)
 {
    if (b!=0)
        return (a* pw(a,b-1));
    else
        return 1;
}

