#include<stdio.h>

int main()
{
    int a[100],n,i,pos=0,neg=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>=0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    printf("%d %d",pos,neg);

    return 0;
}
