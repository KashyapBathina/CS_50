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
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + scores[i];
    }
    return sum;

    //printing average
    printf("Average: %f\n", sum);
}