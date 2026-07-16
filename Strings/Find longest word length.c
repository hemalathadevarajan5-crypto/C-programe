#include<stdio.h>

int main()
{
    char str[100];
    int i=0,len=0,max=0;

    scanf("%[^\n]",str);

    while(1)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            if(len>max)
                max=len;

            len=0;
        }
        else
        {
            len++;
        }

        if(str[i]=='\0')
            break;

        i++;
    }

    printf("%d",max);

    return 0;
}
