#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
int y;
    do
    {
            y = get_int("int: ");
            int rem = y%2;
            y = y/2;
            printf("rem=%d\nnew int=%d\n",rem,y);
    }
    while(!isdigit (y));

}