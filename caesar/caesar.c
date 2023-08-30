#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    int ok = 0;

    // Check if user inputs one key
    if ( argc != 2)
    {
    printf ("Usage: ./caesar key \n");
    return 1;
    }

    //check if user inputs digit
    for (int i = 1, lngt = strlen(argv[1]); i < (lngt); i++)
    {
        if (!isdigit(argv[1][i]))
            {
                printf ("Usage: ./caesar key \n");
                return 1;
            }
    }

    string plaintext = get_string("plaintext: ");
    int key = atoi(argv[1]);
    char cyphertext[strlen(plaintext)];

    for (int i = 0, l = strlen(plaintext); i < l; i++)
    {
        // if uppercase
        if (isupper(plaintext[i]))
        {
            //new word = (word + key % 26) + 64
            cyphertext[i] = ((plaintext[i] - 'A' + key ) % 26) + 'A';
        }
        // if lowercase
        else if (islower(plaintext[i]))
        {
            //new word = (word + key % 26) + 64
            cyphertext[i] = ((plaintext[i] - 'a' + key ) % 26) + 'a';
        }
        //if anything else
        else
        {
            cyphertext[i] = plaintext[i];
        }
    }
    printf("Ciphertext: %s\n", cyphertext);
}