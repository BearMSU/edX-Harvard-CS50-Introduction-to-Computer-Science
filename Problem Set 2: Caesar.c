#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, string argv[])
{
    // Condition 1: argc must equal 2 (./Caesar and Key)
    if (argc != 2)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    // Condition 2: argv[1] must be a digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // Going through each character in argv[1]
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: .caesar key \n");
            return 1;
        }
    }
    // Function atio from stdlib.h that converts string to int.
    int key = atoi(argv[1]);

    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    // For loop to convert each character to the cipher and print out
    for (int j = 0; j < strlen(plain); j++)
    {
        // Looping upper back to beginning if we get to end of alphabet
        if (isupper(plain[j]))
        {
            printf("%c", (plain[j] - 65 + key) % 26 + 65);
        }
        // Looping lower back to beginning if we get to end of alphabet
        else if (islower(plain[j]))
        {
            printf("%c", (plain[j] - 97 + key) % 26 + 97);
        }
        // All other characters get printed normally
        else
        {
            printf("%c", plain[j]);
        }
    }
    printf("\n");
    return 0;
}
