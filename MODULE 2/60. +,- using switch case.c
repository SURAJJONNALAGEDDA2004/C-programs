#include<stdio.h>
main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	 
	 switch(a>0)
	 {	 
	 case 1 :
	 		printf("it is a positiive number");
	 		break;
	case 0 :
		switch (a<0)
		{
	
			case 1 :
			 printf("it is a negative number");
			 break;
			case 0 :
			 printf("it is zero");
			 break;
		}
}
}
