#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

int compute_binary(string msg);
void print_bulb(int bit);

int main(void)
{
    string msg = get_string("What's your message? " );
    //TODO

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}




int compute_binary(string msg);

{
        for (int i = 0, lngt = strlen(msg); i < lngt; i++)
        {
             if int msg[i] 
        }
}
return bit