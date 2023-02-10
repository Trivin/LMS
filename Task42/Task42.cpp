#include <stdio.h>

int main()
{
    // 1
    int const size = 7;
    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        printf("Number %i : ", i+1);
        scanf("%i", &numbers[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");

    // 2
    int newSize;
    printf("New massive size(<100): ");
    scanf("%i", &newSize);
    int newNumbers[100];

    for (int i = 0; i < newSize; i++)
    {
        printf("Number %i : ", i+1);
        scanf("%i", &newNumbers[i]);
    }
    
    for (int i = 0; i < newSize; i++)
    {
        printf("%3i", newNumbers[i]);
    }
}