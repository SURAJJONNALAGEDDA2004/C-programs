#include<stdio.h>
main()
{
	float d,u,n,C,M,L;
	printf("\n enter the volume in the unit of your choice");
	printf("\n you can specify the unit in the next step");
	scanf("%f",&d);
	printf("\n Press 1 if the entered volume is in cubic centimetre ");
	printf("\n Press 2 if the entered volume is in cubic metre ");
	printf("\n Press 3 if the enteres volume is in liter");
	scanf("%f",&u);
	
	if(u==1){
		printf("\n press 1 to convert it into  cubic metre");
		printf("\n press 2 to convert it into liter");
		scanf("%f",&n);
		if(n==1){
			M=d/1000000;
			printf("\n the volume in cubic metre is %f",M);
		}
		else{
			L=d/1000;
			printf("\n the volume in liter is %f",L);
		}
	}
	
		if(u==2){
		printf("\n press 1 to convert it into cubic centimetre");
		printf("\n press 2 to convert it into liter");
		scanf("%f",&n);
		if(n==1){
			C=d*1000000;
			printf("\n the volume in cubic centimetre is %f",C);
		}
		else{
			L=d*1000;
			printf("\n the distance in liter is %f",L);
		}
	}
	
		if(u==3){
		printf("\n press 1 to convert it into cubic centimetre");
		printf("\n press 2 to convert it into cubic metre");
		scanf("%f",&n);
		if(n==1){
			C=d*1000;
			printf("\n the volume in cubic centimetre is %f",C);
		}
		else{
		     M=d/1000;
			printf("\n the volume in cubic metre is %f",M);
		}
	}
   }

