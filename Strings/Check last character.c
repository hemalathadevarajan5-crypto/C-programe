#include<stdio.h>

int main()
{
    char str[100],ch;
    int i=0;

    scanf("%s",str);
    scanf(" %c",&ch);

    while(str[i]!='\0')
    {
        i++;
    }

    if(str[i-1]==ch)
        printf("Present");
    else
        printf("Not Present");

    return 0;
}
