#include<stdio.h>

int main()
{
    int a[100],n,i,old,new;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d%d",&old,&new);

    for(i=0;i<n;i++)
    {
        if(a[i]==old)
        {
            a[i]=new;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
