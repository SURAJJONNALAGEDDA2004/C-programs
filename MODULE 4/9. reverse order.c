#include<stdio.h>
#include<string.h>
main()
{
	int i,n=0;
	char a[100];
	printf("enter the string ");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		n++;
	}
	
	for(i=n;i>=0;i--){
		printf("%c",a[i]);
	}
}

