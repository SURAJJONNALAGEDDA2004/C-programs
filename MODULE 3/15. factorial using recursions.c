#include<stdio.h>
main(){
	int r,a;
	printf("enter your number");
	scanf("%d",&a);
	r=ft(a);
	printf("the factorial is %d",r);
	}
int	ft(int a){
		int fact;
		if(a>=1){
			return (fact=a*ft(a-1));
		}
		else{
			return 1;  
		}
	}
