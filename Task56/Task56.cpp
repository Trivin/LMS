#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers1[100][100];
    int numbers2[100][100];
    int rows;
    int columns;
    printf("Array rows(<100): ");
    scanf("%i", &rows);
    printf("Array columns(<100): ");
    scanf("%i", &columns);

    srand(time(NULL));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            numbers1[i][j] = rand()%11;
            numbers2[i][j] = rand()%11;
        }
    }
    printf("\n");

    printf("Array numbers1: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3i", numbers1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
  
    // sort
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            bool flag = true;
            for (int t = 0; t < columns - (j + 1); t++) 
            { 
                if (numbers1[i][t] > numbers1[i][t + 1]) 
                {
                    flag = false;
                    // swap
                    int b = numbers1[i][t]; 
                    numbers1[i][t] = numbers1[i][t + 1];
                    numbers1[i][t + 1] = b;
                }
            }
            if (flag) 
            break;
        }
    }
    printf("\n");

    printf("Sorted array numbers1: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3i", numbers1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Array numbers2: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3i", numbers2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // swap columns
    int tempElem;
    for (int i = 0; i < rows; i++)
    {
        tempElem = numbers2[i][0];
        numbers2[i][0] = numbers2[i][columns-1];
        numbers2[i][columns-1] = tempElem;
    }

    printf("Swapped array numbers2: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3i", numbers2[i][j]);
        }
        printf("\n");
    }

}

//https://github.com/Trivin/LMS.git