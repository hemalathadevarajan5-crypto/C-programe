#include<stdio.h>

int main()
{
    int a[10][10],r,c,i,j,min;
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
        min=a[i][0];
        for(j=1;j<c;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
        printf("%d\n",min);
    }
    return 0;
}
