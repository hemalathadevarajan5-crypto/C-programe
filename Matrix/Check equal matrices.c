#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j;
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
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                printf("Not Equal");
                return 0;
            }
        }
    }
    printf("Equal");
    return 0;
}
