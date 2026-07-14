#include<stdio.h>

int main()
{
    char str[100],large;
    int i=1;

    scanf("%s",str);

    large=str[0];

    while(str[i]!='\0')
    {
        if(str[i]>large)
        {
            large=str[i];
        }
        i++;
    }

    printf("%c",large);

    return 0;
}
