#include<stdio.h>
main()
{
	int i=1;
	printf("printing 1 to 5 numbers\n");
	while(i<=5){
		printf("%d\n",i);
		i++;
	}
	printf("printing 5 to 1 numbers\n");
	i--;
	while(i>0){
	printf("%d\n",i);
	i--;
	}
}
