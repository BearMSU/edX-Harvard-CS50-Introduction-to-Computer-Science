#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Get message form user
    string message = get_string("Message: ");

    // Go through each character in the message
    int length = strlen(message);
    for (int i = 0; i < length; i++)
    {
        // Convert each character to binary and print each bit as a bulb
        char c = message[i];
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            // use shift operator to right shift
            int bit = (c >> j) & 1;
            // print the corresponding light bulb emoji for the bit
            print_bulb(bit);
        }
        printf("\n");
    }
    printf("\n");
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
