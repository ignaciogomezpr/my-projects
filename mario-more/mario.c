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
    while (8 >= size <= 1);
//Creates pyramid

    for (int i = 0; i == size; i++)
    {
        for (int a = 0; a == size; a++)
        {
            printf("#");

        }
    }
}