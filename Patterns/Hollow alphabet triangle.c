#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("%c",'A'+j-1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
