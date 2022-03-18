#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //getting number of scores
    int n = get_int("How many scores: ");
    int scores[n];


    //promting for scores
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }


    //average
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    return sum / n;


    //printing average
    printf ("Average: %f\n", sum);
}