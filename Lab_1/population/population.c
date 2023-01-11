#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
int start,end,years=0,sum,gain,loos;
do
{
    start = get_int("starting size: ");
}
while (start < 9);
    // TODO: Prompt for end size
do{
    end = get_int("ending size: ");
}
while (end <= start);
    // TODO: Calculate number of years until we reach threshold

do
{
    gain =  (start/3);
    loos =  (start/4);
    start = (start + gain - loos);

    years++;

}
while(start < end);
    // TODO: Print number of years
    printf("number of years:%i \n",years);
}
