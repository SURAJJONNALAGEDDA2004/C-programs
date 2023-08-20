#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float x,y,z;
	printf("enter a\n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);
	printf("enter c\n");
	scanf("%d",&c);
	printf("the given equation is %dx^2%+dx%+d=0\n",a,b,c);
	z=pow(((b*b)-4*a*c),0.5);
	x= (-b+z)/2*a;
	y= (-b-z)/2*a;
	printf("the roots of the equation are %f and %f\n ",x,y);
	if(z*z==0){
		printf("the roots %f and %f are real and equal\n",x,y);
	}
	else if(z*z>0){
		printf("the roots %f and %f are real and different\n",x,y);
	}
	else if(z*z<0){
		printf("the roots %f and %f are imaginary\n",x,y);
	}
}
