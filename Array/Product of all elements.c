#include<stdio.h>

int main()
{
    int a[100],n,i;
    int product=1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        product=product*a[i];
    }

    printf("%d",product);

    return 0;
}
