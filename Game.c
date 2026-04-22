#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;

    srand(time(0));
    number = rand() % 10 + 1;   

    printf("Guess a number between 1 to 10: ");

    do
    {
        scanf("%d", &guess);

        if (guess > number)
            printf("Too Large! Try Again: ");
        else if (guess < number)
            printf("Too Small! Try Again: ");
        else
            printf("You Win!");

    } while (guess != number);

    return 0;
}
