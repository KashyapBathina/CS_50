#include <stdio.h>
#include <cs50.h>

float average(int length, int array[]);

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


    //printing average
    float average(int length, int array[]);
    printf ("Average: %f\n", average);

}

float average(int length, int array[])
{
    //average
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    return sum / n;
}