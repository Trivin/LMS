#include <stdio.h>
#include <string.h>

int main()
{
    // 1
    char str[100];
    printf("String: ");
    scanf("%s", &str);
    int len = strlen(str);
    for (int i = 1; i <= len; i++)
    {
        str[i-1] = str[i];
    }
    printf("New string(deleted 1st char): %s\n", str);

    // 2
    char temp[100];
    for (int i = 0; i < len; i++)
    {
        temp[i] = str[(len-2)-i];
    }
    printf("New string(inverted): %s\n", temp);
}

//https://github.com/Trivin/LMS.git