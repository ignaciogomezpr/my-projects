#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
int population;
do
{
population = get_int("Whats the llama population size?\n ");
}
    while (population <= 9);

    // TODO: Prompt for end size
int endsize;
do
{
endsize = get_int("Whats the llama population's end size?\n ");
}
    while (endsize <= population);

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
