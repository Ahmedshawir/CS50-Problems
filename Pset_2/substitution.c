#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int out = 0;
int main(int count, string input[])
{
    int input_counter = 0;

    if (count!=2)//check command line arguments
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(input[1])!=26)
    {
        printf("key must contain 26 characters\n");
        return 1;
    }
    for (int i = 0; i < strlen(input[1]);i++)
    {
        if(isalpha(input[1][i]))
        {
            input_counter++;
        }
        else if (input_counter!=strlen(input[1]))
        {
            printf("must contain alphabetical characters\n");
            return 1;
        }
    }
    for (int x = 0; x < strlen(input[1]);x++)//check for repetition
    {
        for (int y = x + 1; y < strlen(input[1]); y++)
        {
            if(toupper(input[1][x])==toupper(input[1][y]))
            {
                printf("letters must not be repeated!\n");
                return 1;
            }
        }
    }

    //get plain text from user
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int s = 0; s < strlen(plain); s++)
    {

        if (islower(plain[s]))
        {
            out =(plain[s]-97);
            printf("%c",input[1][out]);
        }
        else if (isupper(plain[s]))
        {
            out =(plain[s]-65);
            printf("%c",input[1][out]);
        }
        else
        {
            printf("%c",plain[s]);
        }

    }
    printf("\n");
}
