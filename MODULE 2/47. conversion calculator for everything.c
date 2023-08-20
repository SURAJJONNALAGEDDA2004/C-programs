#include<stdio.h>
main(){
	int g;
	printf("\n enter 1 if you want distance conversion ");
	printf("\n enter 2 if you want time conversion ");
	printf("\n enter 3 if you want temperature conversion ");
	printf("\n enter 4 if you want area conversion ");
	printf("\n enter 5 if you want volume conversion");
//	fflush(stdin);
	scanf("%d",&g);
    
    if(g==1){
    		float d,u,n,C,M,K;
	printf("\n enter the distance in the unit of your choice");
	printf("\n you can specify the unit in the next step");
	scanf("%f",&d);
	printf("\n Press 1 if the entered distance is in centimetres ");
	printf("\n Press 2 if the entered distance is in metres ");
	printf("\n Press 3 if the entered distance is in kilometres ");
	scanf("%f",&u);
	
	if(u==1){
		printf("\n press 1 to convert it into meters");
		printf("\n press 2 to convert it into kilometers");
		scanf("%f",&n);
		if(n==1){
			M=d/100;
			printf("\n the distance in meters is %f",M);
		}
		else{
			K=d/100000;
			printf("\n the distance in kilometres is %f",K);
		}
	}
	
		if(u==2){
		printf("\n press 1 to convert it into centimetres");
		printf("\n press 2 to convert it into kilometers");
		scanf("%f",&n);
		if(n==1){
			C=d*100;
			printf("\n the distance in centimetres is %f",C);
		}
		else{
			K=d/1000;
			printf("\n the distance in kilometres is %f",K);
		}
	}
	
		if(u==3){
		printf("\n press 1 to convert it into centimeters");
		printf("\n press 2 to convert it into meters");
		scanf("%f",&n);
		if(n==1){
			C=d*100000;
			printf("\n the distance in centimeters is %f",C);
		}
		else{
		     M=d*1000;
			printf("\n the distance in metres is %f",M);
		}
	}
	}
	else if(g==2){
		float t,u,n,M,H,S;
	printf("\n enter the time in the unit of your choice");
	printf("\n you can enter the unit in the next step");
	scanf("%f",&t);
	printf("\n press 1 if the entered time units is seconds\n 2 if the entered time is in minutes\n  3 if the entered time is in hours");
	scanf("%f",&u);
	
	if(u==1){
		printf("\n press 1 to convert it into minutes\n 2 to convert it into hours");
		scanf("%f",&n);
		if(n==1){
			M=t/60;
			printf("\n the time in minutes is %f",M);
		}
		else{
			H=t/3600;
			printf("\n the time in hours is %f",H);
		}
	}
		else if(u==2){
		printf("\n press 3 to convert it into seconds\n  4 to convert it into hours");
		scanf("%f",&n);
		if(n==3){
			S=t*60;
			printf("\n the time in seconds is %f",M);
		}
		else{
			H=t/60;
			printf("\n the time in hours is %f",H);
		}
	}
		else if(u==3){
		printf("\n press 5 to convert it into minutes\n press 6 to convert into seconds");
		scanf("%f",&n);
		if(n==5){
			M=t*60;
			printf("\n the time in minutes is %f",M);
		}
		else{
			S=t*3600;
			printf("\n the time in seconds is %f",H);
		}
	}
	}
	else if(g==3){
		float t,u,n,C,F,K;
	printf("\n enter the tempature in the unit of your choice");
	printf("\n you can enter the unit in the next step");
	scanf("%f",&t);
	printf("\n press 1 if the entered temp units is celsius \n 2 if entered temp units is fahrenheit\n 3 if entered temp units is kelvin");
	scanf("%f",&u);
	
	if(u==1){
		printf("\n press 1 to convert it into fahrenheit\n press 2 to convert it into kelvin");
		scanf("%f",&n);
		if(n==1){
			F=(t*9/5)+32;
			printf("\n the temperature in fahrenheit is %f",F);
		}
		else{
		    K=t+273.15;
			printf("\n the temperature in kelvin is %f",K);
		}
	}
		else if(u==2){
		printf("\n press 3 to convert it into celsius\n press4 to convert it into kelvin");
		scanf("%f",&n);
		if(n==3){
			C=5*((t-32)/9);
			printf("\n the temperature in celsius is %f",C);
		}
		else{
			K=((t-32)*5/9)+273.15;
			printf("\n the temperature in kelvin is %f",K);
		}
	}
	    else if(u==3){
		printf("\n press 5 to convert it into fahrenhiet \n press 6 to convert into celsius");
		scanf("%f",&n);
		if(n==5){
		    F=(1.8*(t-273.15))+32;
			printf("\n the temperature in fahrenhiet is %f",F);
		}
		else{
		     C=t-273.15;
			printf("\n the temperature in celsius is %f",C);
		}
	}
	}
	else if(g==4){
			float a,u,n,MM,C,M,K,F;
	printf("\n enter the area in the unit of your choice");
	printf("\n you can specify the unit in the next step");
	scanf("%f",&a);
	printf("\n Press 1 if the entered area is in square millimetres ");
	printf("\n Press 2 if the entered area is in square centimetres ");
	printf("\n Press 3 if the entered area is in square metres ");
	printf("\n Press 4 if the entered area is in square kilometres ");
	printf("\n Press 5 if the entered area is in square foot");
	scanf("%f",&u);
	
	if(u==1){
		printf("\n press 1 to convert it into square centimeters");
		printf("\n Press 2 to convert it into square metres");
		printf("\n press 3 to convert it into square kilometers");
		printf("\n press 4 to convert it into square foot");
		scanf("%f",&n);
		if(n==1){
			C=a/100;
			printf("the area in square centimeters is %f",C);
		}
		else if(n==2){
			M=a/1000000;
			printf("the area in square metres is %f",M);
		}
		else if(n==3){
			K=a/1000000000000;
			printf("the area in square kilometres is %f",K);
		}
		else if(n==4){
			F=a/92903;
			printf("the area in square foot is %f",F);
		}	
		}
		
			if(u==2){
		printf("\n press 1 to convert it into square millimetres");
		printf("\n Press 2 to convert it into square metres");
		printf("\n press 3 to convert it into square kilometers");
		printf("\n press 4 to convert it into square foot");
		scanf("%f",&n);
		if(n==1){
			MM=a*10;
			printf("the area in square millimeters is %f",MM);
		}
		else if(n==2){
			M=a/10000;
			printf("the area in square metres is %f",M);
		}
		else if(n==3){
			K=a/10000000000;
			printf("the area in square kilometres is %f",K);
		}
		else if(n==4){
			F=a/929;
			printf("the area in square foot is %f",F);
		}	
		}
		
			if(u==3){
		printf("\n press 1 to convert it into square millimeters");
		printf("\n Press 2 to convert it into square centimetres");
		printf("\n press 3 to convert it into square kilometers");
		printf("\n press 4 to convert it into square foot");
		scanf("%f",&n);
		if(n==1){
			M=a*1000000;
			printf("the area in square millimeters is %f",MM);
		}
		else if(n==2){
			M=a*100000;
			printf("the area in square centimetres is %f",C);
		}
		else if(n==3){
			K=a/1000000;
			printf("the area in square kilometres is %f",K);
		}
		else if(n==4){
			F=a*10.764;
			printf("the area in square foot is %f",F);
		}	
		}
		
			if(u==4){
		printf("\n press 1 to convert it into square millimeters");
		printf("\n Press 2 to convert it into square centimetres");
		printf("\n press 3 to convert it into square meters");
		printf("\n press 4 to convert it into square foot");
		scanf("%f",&n);
		if(n==1){
			MM=a*1000000000000;
			printf("the area in square millimeters is %f",MM);
		}
		else if(n==2){
			C=a*10000000000;
			printf("the area in square centimetres is %f",C);
		}
		else if(n==3){
			K=a*1000000;
			printf("the area in square metres is %f",M);
		}
		else if(n==4){
			F=a*10000000;
			printf("the area in square foot is %f",F);
		}	
		}
		
			if(u==5){
		printf("\n press 1 to convert it into square millimeters");
		printf("\n Press 2 to convert it into square centimetres");
		printf("\n press 3 to convert it into square meters");
		printf("\n press 4 to convert it into square kilometres");
		scanf("%f",&n);
		if(n==1){
			MM=a*92903;
			printf("the area in square millimeters is %f",MM);
		}
		else if(n==2){
			C=a*929;
			printf("the area in square centimetres is %f",C);
		}
		else if(n==3){
			M=a/10.764;
			printf("the area in square metres is %f",M);
		}
		else if(n==4){
			K=a/10000000;
			printf("the area in square kilometres is %f",K);
		}	
		}
	}
	else if(g==5){
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
}
