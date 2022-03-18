#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);

int main(void)
{
    //getting number of scores
    int n = get_int("How many scores: ");
    float scores[n];

    //promting for scores
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    //printing average
    printf ("Average: %f\n", sum / n);

}

float average(int length, int array[])
{
    //average
    int sum = 0
    for(int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}