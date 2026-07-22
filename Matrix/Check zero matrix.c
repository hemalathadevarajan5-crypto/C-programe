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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                printf("Not Zero Matrix");
                return 0;
            }
        }
    }
    printf("Zero Matrix");
    return 0;
}
