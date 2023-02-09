#include "sandpiles.h"

void print_grid(int grid[3][3]) {
  
  int i, j;

  printf("=\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        if (j)
            printf(" ");
        printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}

/**
 * grid_copy - copies grid1 to grid2
 * @grid1: first grid
 * @grid2: second grid
 * Return: void
 */
 

int grid_copy(int grid1[3][3], int grid2[3][3])
{
    int i, j, unstable = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            grid2[i][j] = grid1[i][j];
        }
    }       return (unstable);
}

/**
 * topple - topples a sandpile
 * @grid: sandpile
 * Return: void
 */

void topple(int grid[3][3])
{
    int i, j;
    int grid2[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    grid_copy(grid, grid2);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (grid2[i][j] > 3)
            {
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (grid[i][j] > 3)
            {
                topple(grid);
                break;
            }
        }
    }

}

/**
 * sandpiles_sum - computes the sum of two sandpiles
 * @grid1: first sandpile
 * @grid2: second sandpile
 * Return: void
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    int i, j, unstable = 1;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            grid1[i][j] += grid2[i][j];
            if (grid1[i][j] > 3)
                unstable = 1;
        }
    }
    if (unstable == 1)
    {
        print_grid(grid1);
        topple(grid1);
    }
}
    