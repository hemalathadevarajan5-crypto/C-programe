#include<stdio.h>
int main()
{
    char str[100],temp;
    int i=0;
    scanf("%s",str);
    temp=str[0];
    while(str[i]!='\0')
    {
        str[i]=str[i+1];
        i++;
    }
    str[i-1]=temp;
    str[i]='\0';

    printf("%s",str);
    return 0;
}
