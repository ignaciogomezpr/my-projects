#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // Asks name
    string name = get_string("What is your name?  ");

    // Print "Hello, Name"

    printf("Hello, %s\n", name);
}