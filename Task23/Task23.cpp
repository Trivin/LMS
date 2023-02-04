#include <stdio.h>

int main()
{
    long login, pass;
    printf("login = ");
    scanf("%i", &login);
    printf("pass = ");
    scanf("%i", &pass);

    if (((login == 111)&&(pass == 222))
        || ((login == 1111)&&(pass == 2222))
        || ((login == 11111)&&(pass == 22222)))
    {
        printf("Ok");
    }
    else
    {
        printf("Error");
    }
}

//https://github.com/Trivin/LMS.git