#include<stdio.h>
main()
{
	int a=20,b=10,result;
	
	result=sum(a,b);
	printf("sum=%d\n",result);
	
	result=sub(a,b);
	printf("sub=%d\n",result);
	
	result=div(a,b);
	printf("div=%d\n",result);
	
	result=mul(a,b);
	printf("mul=%d\n",result);
}
int sum(int a,int b){
	return(a+b);
}
 int sub(int a,int b){
	return(a-b);
} 
int div(int a,int b){
	return(a/b);
}
int mul(int a,int b){
	return(a*b);
}
