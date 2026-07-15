#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i=0,j=0;
    scanf("%s%s",str1,str2);
    while(str1[i]!='\0')
    {
        i++;
    }
    while(str2[j]!='\0')
    {
        j++;
    }
    if(i==j)
        printf("Equal Length");
    else
        printf("Not Equal");
    return 0;
}
