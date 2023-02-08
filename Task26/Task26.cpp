#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Date of birth:");
    printf("day = ");
    scanf("%i", &day);
    printf("month = ");
    scanf("%i", &month);
    printf("year = ");
    scanf("%i", &year);
    printf("\n");

    // leap non-leap
    if ((year % 4 == 0 && year % 100 || year % 400 == 0))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Non-leap year\n");
    }

    // Eastern calendar
    switch (year%12)
    {
    case 0:
        printf("Monkey\n");
        break;
    case 1:
        printf("Rooster\n");
        break;
    case 2:
        printf("Dog\n");
        break;
    case 3:
        printf("Pig\n");
        break;
    case 4:
        printf("Rat\n");
        break;
    case 5:
        printf("Ox\n");
        break;
    case 6:
        printf("Tiger\n");
        break;
    case 7:
        printf("Rabbit\n");
        break;
    case 8:
        printf("Dragon\n");
        break;
    case 9:
        printf("Snake\n");
        break;
    case 10:
        printf("Horse\n");
        break;
    case 11:
        printf("Sheep\n");
        break;
    }

    // Zodiac
    int z = 100*month+day;
    if (z>=121 && z<=219)
        printf("Aquarius\n");
    else if (z>=220 && z<=320)
        printf("Pisces\n");
    else if (z>=321 && z<=420)
        printf("Aries\n");
    else if (z>=421 && z<=521)
        printf("Taurus\n");
    else if (z>=522 && z<=621)
        printf("Gemini\n");
    else if (z>=621 && z<=722)
        printf("Cancer\n");
    else if (z>=723 && z<=823)
        printf("Leo\n");
    else if (z>=824 && z<=923)
        printf("Virgo\n");
    else if (z>=924 && z<=1023)
        printf("Libra\n");
    else if (z>=1024 && z<=1122)
        printf("Scorpio\n");
    else if (z>=1123 && z<=1221)
        printf("Capricorn\n");
    else if (z>=1222 || z<=120)
        printf("Sheep");
}

//https://github.com/Trivin/LMS.git