#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdio.h>


int Count_words(string Text);
int Count_letters(string Text);
int Count_sentences(string Text);

int main(void)
{
    const string Text = get_string("Enter Text: ");
    int words = Count_words(Text);
    int letters = Count_letters(Text);
    int sentences = Count_sentences(Text);
    //index = 0.0588 * L - 0.296 * S - 15.8
    float L = (float)letters / (float)words*100;
    float S = (float)sentences / (float)words*100;


    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 0)
    {
        printf("Before Grade 1!\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+!\n");
    }
    else
    {
    printf("Grade: %i!\n", index);
    }
}



int Count_words(string Text)
{
    int words = 1;

    for (int i = 0, n = strlen(Text);i < n; i++)
    {
        if (Text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}
int Count_letters(string Text)
{
    int letters = 0;
    for (int i = 0, n = strlen(Text);i < n; i++)
    {
        if isalpha (Text[i])
        {
            letters++;
        }
    }
    return letters;
}

int Count_sentences(string Text)
{
    int sentences = 0;

    for (int i = 0, n = strlen(Text);i < n; i++)
    {
        if (Text[i] == '?' || Text[i] == '!' || Text[i] == '.')
        {
            sentences++;
        }
    }
    return sentences;
}