#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int scrabble_score(string word);

int main(void)
{
   string player1_word = get_string("Player1 : ");
   string player2_word = get_string("Player2 : ");

   int player1_score = scrabble_score(player1_word);
   int player2_score = scrabble_score(player2_word);

   if(player1_score > player2_score)
   {
    printf("Player 1 wins!\n");
   }
   else if(player2_score > player1_score)
   {
    printf("Player 2 wins!\n");
   }
   else
   {
    printf("Tie!\n");
   }

}

int scrabble_score(string word)
{
    int score = 0;
    int point[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    for(int i = 0; i < strlen(word); i++)
    {
        char letter = toupper(word[i]);

        if(letter >= 'A' && letter <= 'Z')
        {
            score += point[letter - 'A'];
        }
    }
    return score;
}
