#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

 /* Distance between each CAPITAL letter in ASCII and in the array is always 65.
    So A = 65 in ASCII and is 0 in our array and B = 66 in ASCII and is 1 in our array
    which is again 65, C is 67 and 2, which is 65. And so on and so forth.*/

/* Distance between each lower case letter in ASCII and in the array is always 97.
   This will be needed in the function compute score to get the correct scores.*/

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
            // since each letter is exactly 65 from it's array location, we use this to connect the points to letter
            score = score + POINTS[word[i] - 65];
        }
        else if (islower(word[i]))
        {
            // same as above, but with lowercase and they are 97 away from the point location in the array
            score = score + POINTS[word[i] - 97];
        }
    }
    return score;
}
