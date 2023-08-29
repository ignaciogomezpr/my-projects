#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    int ok = 0;
    // Check if user inputs one key
    if ( 1 >= argc || argc > 2)
    {
    printf ("Usage: ./caesar key \n");
    return 1;
    }

    //check if user inputs digit
    for (int i = 1, lngt = strlen(argv[1]); i < (lngt + 1) ; i++)
    {
        if (!isdigit(argv[1][i]))
            {
                printf ("Usage: ./caesar key \n");
                return 1;
            }
    }

    return 0;
    
    printf ("ok!");
}