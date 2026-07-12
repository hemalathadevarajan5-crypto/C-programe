#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0, j = 0, temp[100];
    scanf("%s", str);
    scanf(" %c", &ch);
    while(str[i] != '\0')
    {
        if(str[i] != ch)
        {
            temp[j] = str[i];
            j++;
        }
        i++;
    }
    temp[j] = '\0';
    printf("%s", temp);
    return 0;
}
