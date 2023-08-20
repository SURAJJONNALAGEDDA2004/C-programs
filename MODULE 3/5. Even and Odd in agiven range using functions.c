#include<stdio.h>
main()
{
	int x,y;
	printf("enter the first value\n");
	scanf("%d",&x);
	printf("enter the last value\n");
	scanf("%d",&y);
	evenodd(x,y);
	
}
 void evenodd(int x,int y){
	int i;
	 if (x%2==0){
	 	i=x;
	 	printf("Even numbers\n");
	while(i<=y){
	printf("%d\n",i);
	i+=2;}
	i=x+1;
	printf("Odd numbers\n");
	while(i<=y){
	printf("%d\n",i);
	i+=2;
	 }}	
	 else{
	 	i=x+1;
	 	printf("Even numbers\n");
	while(i<=y){
	printf("%d\n",i);
	i+=2;}
	i=x;
	 	printf("Odd numbers\n");
	while(i<=y){
	printf("%d\n",i);
	i+=2;
	 }
}
}



