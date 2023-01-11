#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int count, string input[])
{

    if (count!=2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, int n = strlen(input[1]); i < n; i++)
    {
        if(!isdigit(input[i]))
        {
             printf("Usage: ./caesar key\n");
        return 1;
        }

    }
    int k = atoi(input[1]);

}