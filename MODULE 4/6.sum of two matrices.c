#include<stdio.h>   
int main()  
{  
    int n, c, d, first[10][10], second[10][10], sub[10][10];  
    scanf("%d",&n);  
    for (c = 0; c < n; c++)  {
        for (d = 0; d < n; d++){
		scanf("%d", & first[c][d]); } }
    for (c = 0; c < n; c++)  {
	
        for (d = 0; d < n; d++){
		scanf("%d", & second[c][d]);  
 }}
    for (c = 0; c < n; c++)  
    {  
        for (d = 0; d < n; d++)  
        {  
            sub[c][d] = first[c][d] - second[c][d];  
            printf("%d", sub[c][d]);  
        }  
          
    }  
    return 0;  
}
