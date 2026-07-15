#include<stdio.h>
int main()
{
    char str[100],ch;
    int i=0,pos;
    scanf("%s",str);
    scanf("%d",&pos);
    scanf(" %c",&ch);
    while(str[i]!='\0')
    {
        i++;
    }
    while(i>=pos)
    {
        str[i+1]=str[i];
        i--;
    }
    str[pos]=ch;
    printf("%s",str);
    return 0;
}
