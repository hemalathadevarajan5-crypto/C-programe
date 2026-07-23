#include<stdio.h>

int main()
{
    int a[10][10],r,c,i,j,min,row,col;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    min=a[0][0];
    row=0;
    col=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
                row=i;
                col=j;
            }
        }
    }
    printf("%d %d",row,col);
    return 0;
}
