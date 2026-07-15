#include<stdio.h>
int main()
{
    char str[100],temp;
    int i=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    temp=str[i-1];
    while(i>0)
    {
        str[i]=str[i-1];
        i--;
    }

    str[0]=temp;
    printf("%s",str);
    return 0;
}
