#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    int ok = 0;
    // Check if user inputs one key
    if ( 1 < argc > 2)
    {
    printf ("Usage: ./caesar key" );
    }

    //check if user inputs digit
    for (int i = 1, lngt = strlen(argv[1]), i < (lngt + 1) ; i++)
    {
        if (!isdigit(argc[1][i]))
            {
                printf ("Usage: ./caesar key" );
            }
    }

    int key = atoi(argv[1]);
    string plaintext = get_string("plain text: ");

    for (int i = 0, l = strlen(plaintext); i < l; i++)
    {
        char plaintext[i];
        if (plaintext[i])
    }
}
