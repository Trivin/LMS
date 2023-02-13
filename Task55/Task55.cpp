#include <stdio.h>

int main()
{
    int numbers[100][100];
    int temp[100][100];
    int rows;
    int columns;
    printf("Array rows(<100): ");
    scanf("%i", &rows);
    printf("Array columns(<100): ");
    scanf("%i", &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Number %i - %i : ", i+1, j+1);
            scanf("%i", &numbers[i][j]);
            temp[i][j] = numbers[i][j];
        }
    }
    printf("\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            //swap
            numbers[i][j] = temp[j][i];
            numbers[j][i] = temp[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%i  ", numbers[i][j]);
        }
        printf("\n");
    }
}

//https://github.com/Trivin/LMS.git