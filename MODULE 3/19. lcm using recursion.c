#include<stdio.h>
main()
{
	int a,b,r;
	printf("enter your first number");
	scanf("%d",&a);
	printf("enter your second number");
	scanf("%d",&b);
	r=lcm(a,b);
	printf("the lcm of %d and %d is %d",a,b,r);
}
int lcm(int a, int b){
    static int d=1;    
    if(d%a==0 && d%b==0)
    {
        return d;
    }
    else
    {
        d++;
        lcm(a,b);
        return d;
    }
}



