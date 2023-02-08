#include <stdio.h>

int main()
{
    for (int i = 0; i < 9; i++)
    {
        printf("Hello\n");
    }
    printf("\n");

    for (int i = 0; i < 15; i++)
    {
        printf("%i\n", i);
    }
    printf("\n");

    for (int i = 0; i < 15; i++)
    {
        if (i%2 > 0)
            printf("%i\n", i);
    }
    printf("\n");

    int sum = 0;
    for (int i = 5; i < 16; i++)
    {
        sum = sum + i;
    }
    printf("%i\n", sum);
    
}

//https://github.com/Trivin/LMS.git