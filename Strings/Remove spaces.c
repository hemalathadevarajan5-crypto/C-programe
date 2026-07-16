#include<stdio.h>

int main()
{
    char str[100];
    int i=0;

    scanf("%[^\n]",str);

    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        i++;
    }

    return 0;
}
