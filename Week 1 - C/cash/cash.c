#include <cs50.h>
#include <stdio.h>

int main(void) {

    // Input
    int cents;

    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents <= 0);

        int coin = 0;

        coin += cents / 25;
        cents %= 25;

        coin += cents / 10;
        cents %= 10;


        coin += cents / 5;
        cents %= 5;

        coin += cents;

        printf("%i\n", coin);

}





