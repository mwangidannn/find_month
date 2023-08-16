#include <stdio.h>
int main()
{
    int months;

    
    printf("Enter the month number (1-12) ");
    scanf("%d", &months);


    switch (months){
    

    case 1:
        printf("Welcome to Jan");
        break;

    case 2:
        printf(" welcome to Feburary");
        break;

    case 3:
        printf("Welcome to march");
        break;

    case 4:
        printf("Welcome to April Buddy");
        break;

    case 5:
        printf("Welcome to May");
        break;

    case 6:
        printf("Welcome to June, Your birth month");
        break;

    case 7:
        printf ("Welcome to July");
        break;

    case 8:
        printf(" Welcome to August");
        break;

    case 9:
        printf(" Hi Its September");
        break;

    case 10:
        printf("October");
        break;

    case 11:
        printf( "Novermber");
        break;

    case 12:
        printf("Welcome to December");
        break;

    default:
        printf("Invalid input input to range from 1-12");
    }

    return 0;
}
