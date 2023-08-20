z#include<stdio.h>
main()
{
	float r,h,volume;
	
	printf("enter the radius");
	scanf("%f",&r);
	
	printf("enter the height");
	scanf("%f",&h);
	
	volume=3.14*r*r*h;
	
	printf("volume of the cylinder is :%f",volume);
	
}
