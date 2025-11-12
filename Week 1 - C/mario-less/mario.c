#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Take Input
    int height;
    do {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

        for(int i = 1; i <= height; i++)
        {
            for(int j = 1; j <= height - i; j++)
            {
                printf(" ");
            }
            for(int j = 1; j <= i; j++) {
                printf("#");
            }
            printf("\n");
        }

}
