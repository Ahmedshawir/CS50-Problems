#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
int array[8];

void print_bulb(int bit);

int main(void)
{
    // first get message
    string plain = get_string("Message: ");

    //convert letters in the message to binary
    for (int i = 0; i < strlen(plain); i++)
    {
        int temp = plain[i];

        for (int j = 0; j < 8; j++)
        {
            int rem = (temp%2);
            array[j] = rem;//passing 1 or 0 to array[8]

            temp = (temp/2);

        }
        printf("\n");
            //now reverse the the array[8]
        for (int n = 7; n >= 0;n--)
            {
                print_bulb(array[n]);
            }
    }
            printf("\n");
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
