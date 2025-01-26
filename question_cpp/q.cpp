#include <stdio.h>
int main()
{
    int n;
    int i;
    long long int a,m,d;
    scanf("%lld%lld%d",&a,&m,&d,&n);
    for(i=1;n>i;i++)
    {
        a=a*m+d;
    }
    printf("%lld",a);
}   