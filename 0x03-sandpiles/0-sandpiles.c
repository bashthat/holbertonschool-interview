#include "sandpiles.h"
/**
 * print_grid - prints a 3x3 grid
 * @grid: the grid to print
 */
static void print_grid(int grid[3][3])
{
int i, j;
printf("=\n");
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (j) printf(" ");
printf("%d", grid[i][j]);
}
printf("\n");
}
}
/**
 * compute_sum - computes the sum of two grids
 * @grid1: the first grid
 * @grid2: the second grid
 */
void compute_sum(int grid1[3][3], int grid2[3][3])
{
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
grid1[i][j] += grid2[i][j];
}
}
}
/**
 * is_stable - checks if a grid is stable
 * @grid: the grid to check
 * Return: 1 if stable, 0 otherwise
 */
int is_stable(int grid[3][3])
{
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (grid[i][j] > 3) return (0);
}
}
return (1);
}
/**
 * copy_grid - copies a grid
 * @grid1: the grid to copy to
 * @grid2: the grid to copy from
 */
void copy_grid(int grid1[3][3], int grid2[3][3])
{
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
grid1[i][j] = grid2[i][j];
}
}
}
/**
 * topple - topples a grid
 * @grid: the grid to topple
 */
void topple(int grid[3][3])
{
int i, j;
int grid_copy[3][3];
copy_grid(grid_copy, grid);
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (grid_copy[i][j] > 3)
{
grid[i][j] -= 4;
if (i - 1 >= 0) grid[i - 1][j]++;
if (i + 1 < 3) grid[i + 1][j]++;
if (j - 1 >= 0) grid[i][j - 1]++;
if (j + 1 < 3) grid[i][j + 1]++;
}
}
}
}
/**
 * sandpiles_sum - computes the sum of two sandpiles
 * @grid1: the first grid
 * @grid2: the second grid
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
compute_sum(grid1, grid2);
while (!is_stable(grid1))
{
print_grid(grid1);
topple(grid1);
}
}
/*the end*/