#include "sandpiles.h"

void print_grid(int grid[3][3]) {
  
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        /*if j in nexted loop*/
         if (j)
            printf(" ");
         printf("%d", grid[i][j]);

    }
    printf("\n");
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
    int grid3[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int grid4[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            grid3[i][j] = grid1[i][j] + grid2[i][j];
        }
    }
    if (grid3[0][0] > 3 || grid3[0][1] > 3 || grid3[0][2] > 3 || grid3[1][0] > 3 || grid3[1][1] > 3 || grid3[1][2] > 3 || grid3[2][0] > 3 || grid3[2][1] > 3 || grid3[2][2] > 3)
    {
        printf("=\n");
        print_grid(grid3);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (grid3[i][j] > 3)
                {
                    grid4[i][j] = grid3[i][j] - 4;
                    if (i + 1 < 3)
                        grid4[i + 1][j] += 1;
                    if (j + 1 < 3)
                        grid4[i][j + 1] += 1;
                    if (i - 1 >= 0)
                        grid4[i - 1][j] += 1;
                    if (j - 1 >= 0)
                        grid4[i][j - 1] += 1;
                }
                else
                    grid4[i][j] = grid3[i][j];
            }
        }
        sandpiles_sum(grid4, grid1);

    }
    else
    {
        printf("=\n");
        print_grid(grid3);
    }
    
}
