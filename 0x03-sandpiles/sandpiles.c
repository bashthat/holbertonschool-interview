#include "sandpiles.h"



void print_grid(int grid[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", grid[i][j]);
    }
    printf("\n");
  }
}

void topple(int grid[3][3]) {
  int copy[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      copy[i][j] = grid[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (grid[i][j] > 3) {
        copy[i][j] -= 4;
        if (i + 1 < 3) copy[i + 1][j] += 1;
        if (j + 1 < 3) copy[i][j + 1] += 1;
        if (i - 1 >= 0) copy[i - 1][j] += 1;
        if (j - 1 >= 0) copy[i][j - 1] += 1;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      grid[i][j] = copy[i][j];
    }
  }
}

void sandpiles_sum(int grid1[3][3], int grid2[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      grid1[i][j] += grid2[i][j];
    }
  }
  while (1) {
    int unstable = 0;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (grid1[i][j] > 3) {
          unstable = 1;
          break;
        }
      }
    }
    if (!unstable) break;
    printf("=\n");
    print_grid(grid1);
    topple(grid1);
  }
}
