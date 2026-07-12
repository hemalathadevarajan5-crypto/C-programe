#include <stdio.h>
int main()
{
    char str[100], ch1, ch2;
    int i = 0;
    scanf("%s", str);
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);
    while(str[i] != '\0')
    {
        if(str[i] == ch1)
        {
            str[i] = ch2;
        }
        i++;
    }
    printf("%s", str);
    return 0;
}
