#include "sandpiles.h"

void print_grid(int grid[3][3]) {
  
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", grid[i][j]);
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
    
    while (unstable)
    {
        unstable = 0;
        for (i = 0; i < 3; i++)
        {
        for (j = 0; j < 3; j++)
        {
            grid1[i][j] += grid2[i][j];
            if (grid1[i][j] > 3)
            unstable = 1;
        }
        }
        if (unstable)
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
                if (i + 1 < 3)
                grid1[i + 1][j] += 1;
                if (j + 1 < 3)
                grid1[i][j + 1] += 1;
                if (i - 1 >= 0)
                grid1[i - 1][j] += 1;
                if (j - 1 >= 0)
                grid1[i][j - 1] += 1;
            }
            }
        }
        }
    }

}
