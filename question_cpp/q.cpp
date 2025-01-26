#include <stdio.h>
int main()
{
    long long int a,b,c;
    long long int d = 1;
    scanf("%lld%lld%lld",&a,&b,&c);
    while(d%a!=0 || d%b!=0 || d%c!=0)d++;
    printf("%lld",d);
}   