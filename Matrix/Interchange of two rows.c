#include<stdio.h>

int main()
{
    int a[10][10],r,c,i,j,row1,row2,temp;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&row1,&row2);
    for(j=0;j<c;j++)
    {
        temp=a[row1][j];
        a[row1][j]=a[row2][j];
        a[row2][j]=temp;
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
