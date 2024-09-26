#include <stdio.h>

int main()
{
    printf("Enter The Year : ");

    int y;
    scanf("%d", &y);

    if((y % 4 == 0 && y % 100 != 0) || ( y % 400 == 0))
    {
        printf("%d is a leap year\n", y);
    }else 
    {
        printf("%d is not a leap year\n", y);
    }
}

/*
Input:
    Enter The Year : 2020

Output:
    2020 is a leap year
*/
