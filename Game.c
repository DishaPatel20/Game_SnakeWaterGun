#include <stdio.h>
#include <stdlib.h> // this library is used to create random number
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if u win, -1 if u lose, 0 if u draw
    // draw cases :- ss | gg | ww
    if (you == comp)
    {
        return 0;
    }
    // cases :- sg, gs  | sw, ws  | gw,wg
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    int number;
    //comp = 's'; // s = snake
    srand(time(0));            //to generate different number at a time u have to initialized rand
    number = rand() % 100 + 1; // to generate random number between 1 to 100

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter s for snake, w for water and g for gun :- \n ");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You choose %c and Computer choose %c. ", you, comp);
    if (result == 0)
    {
        printf("You Game is Draw :( \n");
    }
    else if (result == 1)
    {
        printf("You Win :) \n");
    }
    else
    {
        printf("You Lose :( \n");
    }

    return 0;
}