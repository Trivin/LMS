#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int array[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand()%size;
        printf("%i ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array1[100];
    int array2[100];
    int size;

    printf("Array1 size(<100): ");
    scanf("%i", &size);
    print_array(array1, size);

    printf("Array2 size(<100): ");
    scanf("%i", &size);
    print_array(array2, size);
}



//https://github.com/Trivin/LMS.git