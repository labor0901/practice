#include <stdio.h>
int main()
{
    int n;
    int i;
    long int a;
    long int r;
    scanf("%d%d%d",&a,&r,&n);
    for(i=1;n>i;i++)
    {
        a = a*r;
    }
    printf("%lld",a);
}   