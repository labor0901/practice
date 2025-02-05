#include <stdio.h>
int main()
{
    int i,j,x,y,t =0;
    int a[11][11]={};
    int n=11;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=11;j++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=11;j++)
        {
            if(a[j][i]==0) 
            {
                if(x==0) 
                {
                    if(y==0)
                    {
                        x=j;
                        y=i;
                    }
                }
                if(x==j) 
                {
                    if(y==i)
                    {
                        a[j][i]=9;
                    }
                }
                if(a[x][i]==1)
                {
                    t=1;
                    y++;
                }
                if(t==1) y++;
                else x++;
            }
        }
    }
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=11;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
