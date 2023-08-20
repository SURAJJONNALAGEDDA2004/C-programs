#include<stdio.h>
main()
{
	int m,s,so,e,h,total,avg,p;
	
	printf("\n enter maths marks");
	scanf("%d",&m);
	
	printf("\n enter science marks");
	scanf("%d",&s);
	
	printf("\n enter social marks");
	scanf("%d",&so);
	
	printf("\n enter english marks");
	scanf("%d",&e);
	
	printf("\n enter hindi marks");
	scanf("%d",&h);
	
	total=m+s+so+e+h;
	avg=total/5;
	p=(total*100)/500;
	
	printf("\n the total marks of the student is : %d",total);
	printf("\n average of the marks : %d",avg);
	printf("\n percentage of the marks : %d",p);

}
	
	
	

