#include<stdio.h>

int main()
{
    char str[100],ch;

    scanf("%s",str);
    scanf(" %c",&ch);

    if(str[0]==ch)
        printf("Present");
    else
        printf("Not Present");

    return 0;
}
