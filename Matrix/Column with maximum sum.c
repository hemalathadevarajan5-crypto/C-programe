#include<stdio.h>

int main()
{
    int a[10][10],r,c,i,j,sum,max,col;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=0;
    col=0;
    for(j=0;j<c;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
        {
            sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
            col=j;
        }
    }
    printf("%d",col);
    return 0;
}
