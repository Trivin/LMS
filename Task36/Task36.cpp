#include <stdio.h>

int main()
{
    for (int i = 1; i < 11; i++)
    {
        printf("%i * 5 = %i\n", i, i*5);
    }
    printf("\n");

    int number;
    while (true)
    {
        printf("Number: ");
        scanf("%i", &number);
        if (number == 7)
            break;
        else if (number > 7)
        {
            printf("%i > 7", number);
        }
        else
        {
            printf("%i < 7", number);
        }
        printf("\n");

        if (number > 10)
            printf("%i > 10", number);
        else if (number < 10)
            printf("%i < 10", number);
        printf("\n");

        printf("Divide by 2: ");
        if (number%2 == 0)
            printf("true");
        else
            printf("false");
        printf("\n");

        printf("Divide by 3: ");
        if (number%3 == 0)
            printf("true");
        else
            printf("false");          
        printf("\n");
    }    
}