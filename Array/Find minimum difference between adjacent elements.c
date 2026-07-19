#include<stdio.h>

int main()
{
    int a[100],n,i,min,diff;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[1]-a[0];

    if(min<0)
    {
        min=-min;
    }

    for(i=1;i<n-1;i++)
    {
        diff=a[i+1]-a[i];

        if(diff<0)
        {
            diff=-diff;
        }

        if(diff<min)
        {
            min=diff;
        }
    }

    printf("%d",min);

    return 0;
}
