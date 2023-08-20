#include<stdio.h>
int stg(int a, int b);
main(){
	int a,b,c;
	printf("enter a first number\n");
	scanf("%d",&a);
	printf("enter a sceond number\n");
	scanf("%d",&b);
	c=stg(a,b);
}
int stg(int a, int b){
int i,temp,sum,k,fact,r;
  for(i=a;i<=b;i++){
      temp = i;
      sum=0;

      while(temp>0){

          k=1;
        fact=1;

           r=temp%10;

           for(k=1;k<=r;k++){
        fact=fact*k;

           }

         sum=sum+fact;

         temp=temp/10;

      }
            if(sum==i){
	  
   printf("%d\n",i);

  }
  }


  
}
	


