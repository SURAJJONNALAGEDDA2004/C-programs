#include <stdio.h>
 main()
{
   int a,b,c,i,j;
 
   printf("Enter the range:");
   scanf("%d %d", &a, &b);
 
   printf("Prime numbers from %d and %d are:\n",a,b);
   for(i=a+1;i<b;++i)
   {
      c=0;
      for(j=2;j<=i/2;++j)
      {
         if(i%j==0)
         {
            c=1;
            break;
         }
      }
      if(c==0)
         printf("%d\n",i);
  }
}
