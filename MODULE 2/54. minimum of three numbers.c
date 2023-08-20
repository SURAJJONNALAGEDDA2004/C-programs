#include<stdio.h>
main()
{
	float a,b,c;
	printf("enter the value of a\n ");
	scanf("%f",&a);
	printf("enter the value of b\n ");
	scanf("%f",&b);
	printf("enter the value of c\n ");
	scanf("%f",&c);
	
	if(a<b){
		if(a<c){
			printf("a is the smallest number");
		}
		else{
		printf("c is the smallest number");
				}
	}
	else{
		if(b<c){
			printf("b is the smallest number");
		}
		else{
			printf("c is the smallest number");
		}
	}
}
