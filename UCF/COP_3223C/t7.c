#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*------------module 7------------------------------------------------------------------------------------------------------------*/

/*
2-d Arrays:
    Gen struct: type var[y][x]; where y is row and x is column
                var[0][0] = 2;
*/

int main() {
    int grid[11][11];
    int i, j;

    for(i=0;i<11;i++) {
        grid[i][0] = 1;
        grid[i][1] = 1;
    }

    for(i=2;i<11;i++) {
        for(j=1;j<i;j++) {
            grid[i][j]=grid[i-1][j-1] + grid[i-1][j];
        }
    }
}