#include<stdio.h>

int main()
{
    int i,j,n,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num=i%2;
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            if(num==0)
            {
                num=1;
            }
            else
            {
                num=0;
            }
        }
        printf("\n");
    }
    return 0;
}
