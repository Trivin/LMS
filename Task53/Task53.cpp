#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers[100][100];
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
            numbers[i][j] = rand()%10-2;
        }
    }
    printf("\n");
  
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3i", numbers[i][j]);
        }
        printf("\n");
    }
}

//https://github.com/Trivin/LMS.git