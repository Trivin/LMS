#include <stdio.h>

int main()
{
    int numbers[100];
    int size;
    printf("Massive size(<100): ");
    scanf("%i", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Number %i : ", i+1);
        scanf("%i", &numbers[i]);
    }
    printf("\n");
    
    int min = numbers[0];
    int max = numbers[0];
    int sum = 0;
    long average;
    for (int i = 0; i < size; i++) 
    {
        if (min > numbers[i])
            min = numbers[i];

        if (max < numbers[i])
            max = numbers[i];

        sum = sum + numbers[i];        
    }
    average = (long)sum / (long)size;
    
    printf("Min : %i\n", min);
    printf("Max : %i\n", max);
    printf("Sum : %i\n", sum);
    printf("Average : %i", average);
}

//https://github.com/Trivin/LMS.git