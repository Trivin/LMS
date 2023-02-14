#include <stdio.h>

int new_sqrt(int num)
{
    for (int i = 1; i < num; i++)
    {
        if (i*i == num)
            return i;
    }
    return 0;
}

void new_sqrt(int num, int *sqrt)
{
    *sqrt = 0;
    for (int i = 1; i < num; i++)
    {
        if (i*i == num)
        {
            *sqrt = i;
            break;
        }       
    }
}

void new_sqrt(int num, int &sqrt)
{
    sqrt = 0;
    for (int i = 1; i < num; i++)
    {
        if (i*i == num)
        {
            sqrt = i;
            break;
        }
    }
}

int main()
{
    int num[3];
    int sqrt[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Number1: ");
        scanf("%i", &num[i]);  
    }

    sqrt[0] = new_sqrt(num[0]);
    new_sqrt(num[1], &sqrt[1]);
    new_sqrt(num[2], sqrt[2]);
    
    for (int i = 0; i < 3; i++)
    {
        if (sqrt[i] > 0)
            printf("%i is square of %i\n", num[i], sqrt[i]);
        else
            printf("%i not a square\n", num[i]);
    }
}



//https://github.com/Trivin/LMS.git