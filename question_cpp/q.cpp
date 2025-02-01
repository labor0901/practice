#include <stdio.h>
int main()
{

    int w,h,n,l,d,x,y,i,j,t;
    scanf("%d%d%d",&w,&h,&n);
    w++;
    h++;
    int a[w][h]={};
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&l,&d,&y,&x);
        if(d==1)
        {
            for(j=0;j<l;j++)
            {
                a[x][y]=1;
                y++;
            }
        }
        else
        {
            for(j=0;j<l;j++)
            {
                a[x][y]=1;
                x++;
            }
        }
    }
    for(i=1;i<h;i++)
    {
        for(j=1;j<w;j++)
        {
            if(a[j][i]==NULL) a[j][i]=0;
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
