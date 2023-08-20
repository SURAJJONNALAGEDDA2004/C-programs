#include<stdio.h>
main(){

float a,b,r,q;
printf("enter the dividend");
scanf("%f",&a);
printf("enter the divisor\n");
scanf("%f",&b);
q=a/b;
r=a-(b*q);
printf("the remainder is %f",r);
}
