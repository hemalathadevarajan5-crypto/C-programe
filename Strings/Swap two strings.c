#include<stdio.h>
int main()
{
    char str1[100],str2[100],temp[100];
    int i=0;
    scanf("%s%s",str1,str2);
    while(str1[i]!='\0')
    {
        temp[i]=str1[i];
        i++;
    }
    temp[i]='\0';
    i=0;
    while(str2[i]!='\0')
    {
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';

    i=0;
    while(temp[i]!='\0')
    {
        str2[i]=temp[i];
        i++;
    }
    str2[i]='\0';

    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}
