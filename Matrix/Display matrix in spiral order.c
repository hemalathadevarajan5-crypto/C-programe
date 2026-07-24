#include<stdio.h>

int main()
{
    int a[10][10],r,c,i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        printf("%d ",a[0][j]);
    }
    for(i=1;i<r;i++)
    {
        printf("%d ",a[i][c-1]);
    }
    if(r>1)
    {
        for(j=c-2;j>=0;j--)
        {
            printf("%d ",a[r-1][j]);
        }
    }
    if(c>1)
    {
        for(i=r-2;i>0;i--)
        {
            printf("%d ",a[i][0]);
        }
    }
    return 0;
}
