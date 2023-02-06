#include "sandpiles.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sandpiles_sum - sandpiling grids
 * @grid1: prints every topppling round
 * @grid2: second grid for sandpile
 * Return: NULL
 * 
*/

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    
    // 1. Add the two grids
    // 2. Check if the grid is stable
    // 3. If not, topple the grid
    // 4. Print the grid
    // 5. Repeat

    int i, j, unstable = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            grid1[i][j] += grid2[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (grid1[i][j] > 3)
            {
                unstable = 1;
                break;
            }
        }
    }

    if (unstable == 1)
    {
        printf("=\n");
        print_grid(grid1);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (grid1[i][j] > 3)
                {
                    grid1[i][j] -= 4;
                    if (i - 1 >= 0)
                        grid1[i - 1][j] += 1;
                    if (i + 1 < 3)
                        grid1[i + 1][j] += 1;
                    if (j - 1 >= 0)
                        grid1[i][j - 1] += 1;
                    if (j + 1 < 3)
                        grid1[i][j + 1] += 1;
                }
            }
        }
        sandpiles_sum(grid1, grid2);
    }
   

}