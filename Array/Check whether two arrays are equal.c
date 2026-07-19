#include<stdio.h>

int main()
{
    int a[100],b[100],n,i;

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
        if(a[i]!=b[i])
        {
            printf("Not Equal");
            return 0;
        }
    }

    printf("Equal");

    return 0;
}
