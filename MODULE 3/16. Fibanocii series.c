#include<stdio.h>
main(){
    int a,i;
    printf("enter the number");
    scanf("%d",&a);
    fib(a);
    for(i=0;i<=a;i++){
    printf("the fibanocii series is as follows %d:",fib(a));
	}
}
int fib(int a){
	
	if(a==0){
		return 0;
	}
	else if(a==1){
		return 1;
	}
	else {
		return (fib(a-1)+fib(a-2));
	}
}
