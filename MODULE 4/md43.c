#include <stdio.h>
int main(){
   int  a[100][100],m,n,i,j;
   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix\n");
   for (i= 0; i < m; i++){
      for (j = 0; j < n; j++){
         scanf("%d", &a[i][j]);
}}
printf("the elements in the diagonal of the matrix are\n");
for (i= 0; i < m; i++){
      for (j = 0; j < n; j++){
         if(a[i]==a[j]){
         	printf("%d\n",a[i][j]);
		 }
}}
}


   

