#include <stdio.h>
int main()
{
    int n, i, k;
    int a[10001]={};
    scanf("%d", &n); 
    for(i=1; i<=n; i++) 
    {  
        scanf("%d", &a[i]); 
    }
    for(i=n; i>0; i--)
    {
        printf("%d ", a[i]); 
    }
}