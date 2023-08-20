#include<stdio.h>
main()
{
	int a;
	printf("enter a number \n ");
	scanf("%d",&a);
	  
	  if(a%5==0){
	  	if(a%11==0){
	  		printf("it is divisble by both 5 and 11");
		  }
		  else{
		  	printf("not divisble");
		  }
	  }
	  else{
	  	printf("not divisble");
	  }
}
