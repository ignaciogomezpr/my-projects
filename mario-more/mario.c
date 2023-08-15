#include <cs50.h>
#include <stdio.h>

int main(void)
{
//Get pyramid size
    int size;
    do
    {
    size = get_int("What's the pyramid size? ");
    }
    while (size < 1 || 8 < size);

//Creates pyramid

    for (int i = 0; i < size  + 1; i++)
    {

        for (int s = 0; s < size - i; s ++)
        {
            printf(" ");
        }

        for (int a = 0; a < i; a++)
        {
            printf("#");
        }

            printf("  ");

        for (int a = 0; a < i; a++)
        {
            printf("#");
        }

        for (int s = 0; s < size - i; s ++)
        {
            printf(" ");
        }

            printf("\n");
    }
}