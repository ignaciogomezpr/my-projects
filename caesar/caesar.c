#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int numbers[] = {0,1,2,3,4,5,6,7,8,9};
    if (argc != 2)
    {
        for (int i = 1, lngt = strlen(argv[1]), i < (lngt + 1) ; i++)
        {
            for (int c = 0; c < 9, c++)
            {
                if argv[1][i] != numbers[c]
                {
                printf ("Usage: ./caesar key" );
                }
            }
        }
    }
}
