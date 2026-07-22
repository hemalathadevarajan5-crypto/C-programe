#include<stdio.h>

int main()
{
    int a[10][10],r,c,i,j,temp;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c/2;j++)
        {
            temp=a[i][j];
            a[i][j]=a[i][c-j-1];
            a[i][c-j-1]=temp;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
