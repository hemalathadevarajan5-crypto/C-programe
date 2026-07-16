#include<stdio.h>

int main()
{
    char str[100];
    int i=0,len=0,min=100;

    scanf("%[^\n]",str);

    while(1)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            if(len<min&&len>0)
                min=len;

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

    printf("%d",min);

    return 0;
}
