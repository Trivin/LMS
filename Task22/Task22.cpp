#include <stdio.h>

int main()
{
    int a,b;
    printf("a = ");
    scanf("%i", &a);
    printf("b = ");
    scanf("%i", &b);

    if (a == b)
    {
        printf("Equal");
    }
    else
    {
        if (a > b)
        {
            printf("Greater");
        }
        else
        {
            printf("Less");
        }
    }
}

//https://github.com/Trivin/LMS.git