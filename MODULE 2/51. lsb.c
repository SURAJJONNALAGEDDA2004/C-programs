#include<Stdio.h>
main()
{  
int a;
	printf("enter a number");
	scanf("%d",&a);
	
	if(a&1==1){
		printf("the least significant bit is set 1");
	}
	else{
		printf("the leas significant bit is unset 0");
	}
}
