#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //getting number of scores
    int n = get_int("How many scores: ");
    int scores[n];


    //prompting for scores
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }


    //average
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + scores[i];
    }

    float average = (float) sum / (float) n;

    //printing average
    printf("%f\n", average);
}