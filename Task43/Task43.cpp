#include <stdio.h>

int main()
{
    // 1
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
    
    //sort
    for (int i = 0; i < size; i++) 
    {
        bool flag = true;
        for (int j = 0; j < size - (i + 1); j++) 
        { 
            if (numbers[j] > numbers[j + 1]) 
            {
                flag = false;
                // swap
                int b = numbers[j]; 
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = b;
            }
        }
        if (flag) 
            break;
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%i ", numbers[i]);
    }
}

//https://github.com/Trivin/LMS.git