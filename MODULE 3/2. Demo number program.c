#include<math.h>

 int fun()
{
	int i,j;
	for(i=1;i<=50;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}main()
{

	fun();
}
