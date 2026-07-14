#include<stdio.h>

int main()
{
    char str[100],small;
    int i=1;

    scanf("%s",str);

    small=str[0];

    while(str[i]!='\0')
    {
        if(str[i]<small)
        {
            small=str[i];
        }
        i++;
    }

    printf("%c",small);

    return 0;
}
