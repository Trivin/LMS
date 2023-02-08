#include <stdio.h>

int main()
{
    int a;
    printf("Amount: ");
    scanf("%i", &a);
    printf("\n");  

    int number;
    printf("Number1: ");
    scanf("%i", &number);
    int sum = number;
    int min = number;
    int max = number;

    for (int i = 2; i <= a; i++)
    {
        printf("Number%i: ", i);
        scanf("%i", &number);
        printf("\n");  

        sum = sum + number;

        if (number < min)
            min = number;
        if (number > max)
            max = number;
    }

    printf("Max = %i\n", max); 
    printf("Min = %i\n", min); 
    printf("Sum = %i\n", sum); 
    printf("Average = %f\n", (float)sum / (float)a); 
}

//https://github.com/Trivin/LMS.git