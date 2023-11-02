#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Starting size
    int start = 0;
    do
    {
        start = get_int("Starting Size: ");
    }
    while (start < 9);

    // End size
    int end = 0;
    do
    {
        end = get_int("End Size: ");
    }
    while(end < start);

    //How many years will it take to get to the goal?
    int years = 0;
    while(start < end)
    {
        start += start/12; // n/3 die and n/4 are born every year
        years++;
    }
    printf("Years: %d\n", years);
}
