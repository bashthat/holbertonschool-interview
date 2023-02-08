#include "sandpiles.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * topple - topple sandpiles
 * @grid: 3x3 grid
 * Return: NULL
*/

void topple(int grid[3][3])
{
    int i, j, stable = 0;
    int grid2[3][3];

    while (stable == 0)
    {
        stable = 1;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                grid2[i][j] = grid[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (grid2[i][j] > 3)
                {
                    stable = 0;
                    grid[i][j] -= 4;
                    if (i - 1 >= 0)
                        grid[i - 1][j] += 1;
                    if (i + 1 < 3)
                        grid[i + 1][j] += 1;
                    if (j - 1 >= 0)
                        grid[i][j - 1] += 1;
                    if (j + 1 < 3)
                        grid[i][j + 1] += 1;
                }
            }
        }
        if (stable == 0)
            print_grid(grid);
    }
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 * Return: NULL
*/

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            grid1[i][j] += grid2[i][j];
        }
    }
    topple(grid1);
}