#include<stdio.h>
void tpe(int a);
void per(int a);
void ars(int a);
main()
{
	int a;
   printf("enter your number");
   scanf("%d",&a);
   tpe(a);
   per(a);
   ars(a);	
}
void tpe(int a){

int i,c=0; 
for(i=1;i<=a;i++){
	if(a%i==0){
		c++;
	}	
}
if(c==2){
		printf("prime number");
	}
}

void per(int a){
	int r,s=0,i;  
     
for(i=1;i<a;i++)  
 {  
    r=a%i;  
      if (r==0) 
	   {             
     s=s+i;  
       }                
 }  
if (s==a)  {

    printf("it is a Perfect Number");  
}
}
void ars(int a){
	int r,sum=0,temp;       
temp=a;    
while(a>0)    
{    
r=a%10;    
sum=sum+(r*r*r);    
a=a/10;    
}    
if(temp==sum)  {
printf("armstrong  number ");  
}
}
