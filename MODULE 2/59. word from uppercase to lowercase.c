
#include<stdio.h>
main()
{
	char a[100],cw[100];
	int i;
	printf("enter your word\n");
	scanf("%s",&a);
	printf("the entered word is %s\n",a);
	
	while(a[i]!='\0'){
	cw[i]=a[i]+32;
	i++;
	}
	printf("the converted word is %s\n",cw);
}
