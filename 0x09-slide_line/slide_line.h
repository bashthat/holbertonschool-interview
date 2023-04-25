#ifndef SLIDE_H
#define SLIDE_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1
/*functions*/
int slide_line(int *line, size_t size, int direction);
void mergeL(int *line, size_t size);
void mergeR(int *line, size_t size);
/*endif*/
#endif