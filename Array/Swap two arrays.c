#include<stdio.h>

int main()
{
    int a[100],b[100],n,i,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
