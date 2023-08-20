#include<stdio.h>
main()
{
	int a,r;
	printf("enter age");
	scanf("%d",&a);
	  r=checkelg(a);
	  if(r==1){
	  	printf("Eligble");
	  }
	  else{
	  	printf("not eligble");
	  }
	   
}
int checkelg()
{
	checkcond();
}
int checkcond(a){
	
	if(a>=18){
		return 1;
	}
	else{
		return 0;
	}
}

