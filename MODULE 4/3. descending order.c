#include<stdio.h>
main()
{
	int a[1000],i,j,t,n;
	printf("enter the number of digits");
	scanf("%d",&n);
	printf("enter the digits");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("the numbers in descending order");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
