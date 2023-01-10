#include <cs50.h>
#include <stdio.h>
#include <math.h>

int card_length(long number);
bool AX (long credit,int counter);
bool MC (long credit,int counter);
bool VISA(long credit,int counter);

int main(void)
//geting entry ***************
{
    int counter=0,sum1=0,sum2=0;
    long long number;

    number= get_long("Enter card number: ");
    counter= card_length(number);
    const long credit=number;

bool x = false;
// validity check
while (number!=0)
{

    if (x==true)
    {
        int temp= (2*(number%10));
        if (temp>10)
        {
            temp=(temp/10)+(temp%10);
        }
        sum1=sum1+temp;
        number=number/10;
    }
    else if (x==false)
    {
        sum2=number%10 +sum2;
        number=number/10;
    }

    x=!x;
}

int check =(sum1+sum2)%10;
bool valid;
if (check==0&&)
{
i
}
//now to check company's name

}

//check number length
int card_length(long number)
{
    int counter=0;
while(number!=0)
{
    number=number/10;
    counter++;

}
return counter;
}
//AX
bool AX (long credit,int counter)
{
    bool x;
    if (((credit/pow(10,counter-2)==34)||(credit/pow(10,counter-2)==37))&&counter==15)
    {
         x = true;
    }
    else
    {
        x=false;
    }
return x;
}
//MC
bool MC (long credit,int counter)
{
    bool x;
    if (((credit/pow(10,counter-2)==51)||(credit/pow(10,counter-2)==52)||(credit/pow(10,counter-2)==53)||(credit/pow(10,counter-2)==54)||(credit/pow(10,counter-2)==55))&&counter==16)
    {
         x = true;
    }
    else
    {
        x=false;
    }
return x;
}
bool VISA (long credit,int counter)
{
    bool x;
    if (((credit/pow(10,counter-1))==4)&&((counter==13)||(counter==16)))
    {
         x = true;
    }
    else
    {
        x=false;
    }
return x;
}