#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);


    // Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // Calculate number of years until we reach threshold
    int years = 0;
    int lamas = start;


    while (lamas <= end)
    {
        lamas = lamas + lamas / 3 - lamas / 4;
        years++;
        //printf("lamas: %i\n", lamas);
    }



    // Print number of years
    printf("Years: %i\n", years);
}
