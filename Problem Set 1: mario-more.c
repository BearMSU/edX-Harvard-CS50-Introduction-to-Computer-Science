#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int y;

    do
    {
        y = get_int("Height: ");
    }
    while (y > 8 || y < 1);

    for (int i = 0; i < y; i++)
    {
        // keep track of spacing for left and right side equality
        int space = y - (i + 1);
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        int blocks = i + 1;
        for (int x = 0; x < blocks; x++)
        {
            printf("#");
        }
        printf(" ");
        
        for (int x = 0; x < blocks; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}
