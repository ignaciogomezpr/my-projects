#include <cs50.h>
#include <stdio.h>

int main(void)
{
// Get Credit Card #
    long n = get_long("Number: ");
    long sum = 0;
    long r = 0;
// Verify if it is valid
    // Multiply every other number by 2
    for (long i = 10; n / i > 0 ; i *= 10)
    {
        r = n % i;
        r *= 2
        sum += r;
    }
    printf("%li ", sum);
    // Add Products
    // Add Everything
    // Last digit in sum == 0?
        //If Sum % 10 == 0: Valid
// Verify if it is Master Card
// Verify if it is Amex
// Verify if it is Visa

}