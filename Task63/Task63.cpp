#include <stdio.h>
#include <string.h>

int main()
{
    // 1
    char str[100];
    printf("String: ");
    scanf("%s", &str);
    printf("2-nd symbol: %c\n", str[1]);

    // 2
    int len = strlen(str);
    printf("String length: %i\n", len);
    // swap
    char temp = str[0];
    str[0] = str[len-1];
    str[len-1] = temp;
    printf("New string: %s\n", str);

    // 3
    int del;
    printf("Delete symbol: ");
    scanf("%i", &del);
    for (int i = del; i <= len; i++)
    {
        str[i-1] = str[i];
    }
    printf("New string: %s\n", str);
}

//https://github.com/Trivin/LMS.git