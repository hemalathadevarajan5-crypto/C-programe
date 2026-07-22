#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j,sum1=0,sum2=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            sum1=sum1+a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
            sum2=sum2+b[i][j];
        }
    }
    if(sum1>sum2)
    {
        printf("First Matrix");
    }
    else if(sum2>sum1)
    {
        printf("Second Matrix");
    }
    else
    {
        printf("Equal");
    }
    return 0;
}
