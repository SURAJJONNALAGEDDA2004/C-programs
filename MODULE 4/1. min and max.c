#include <stdio.h>
 main()
{
    int a[1000],i,n,mi,ma;
   
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    mi=a[0];
	ma=a[0];
    for(i=0;i<n;i++)
    {
         if(mi>a[i])
		  mi=a[i];   
		   if(ma<a[i])
		    ma=a[i];       
    }
     printf("minimum is %d",mi);
          printf("\nmaximum is %d",ma);
 
 
    return 0;
}
