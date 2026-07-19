#include<stdio.h>

int main()
{
    int a[100],n,i,j,count;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }

        if(count==2)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}
