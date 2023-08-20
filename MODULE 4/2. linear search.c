#include<stdio.h>
int main()
{
	int a[100],n,b,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++){
    	if(a[i]==b){	 
    		printf("yes");
		}
		else{
			printf("no");
		}
	}
}
