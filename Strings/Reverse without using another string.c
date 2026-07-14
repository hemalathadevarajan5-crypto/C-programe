#include<stdio.h>

int main()
{
    char str[100],temp;
    int i=0,j;

    scanf("%s",str);

    while(str[i]!='\0')
    {
        i++;
    }

    for(j=0;j<i/2;j++)
    {
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }

    printf("%s",str);

    return 0;
}
