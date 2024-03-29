#ifndef SAND_H
#define SAND_H


static void print_grid(int grid[3][3]);
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void topple(int grid[3][3]);
int is_stable(int grid[3][3]);
void copy_grid(int grid1[3][3], int grid2[3][3]);
int grid_copy(int grid1[3][3], int grid2[3][3]);
void compute_sum(int grid1[3][3], int grid2[3][3]);
#endif