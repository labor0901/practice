#include <stdio.h>
int main()
{
    int a[10000]={};
    int n,i,k,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        k=1;
        while(a[i]<=a[k]==true && k<=n)
        {
            if(k==10) s=a[i];
            k++;
        }
    }
    printf("%d",s);
}