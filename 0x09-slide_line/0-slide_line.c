#include "slide_line.h"

/**
 * slide_line - slides and merges an array of integers
 * @line: points to an array of integers
 * @size: number of elements in array
 * @direction: direction to slide and merge
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
if (direction == SLIDE_LEFT)
slide_left(line, size);
else if (direction == SLIDE_RIGHT)
slide_right(line, size);
else
return (0);
return (1);
}

/**
 * slide_left - slides and merges an array of integers to the left
 * @line: points to an array of integers
 * @size: number of elements in array
 */

void slide_left(int *line, size_t size)
{
int i, j, k;
for (i = 0; i < (int)size; i++)
{
if (line[i] == 0)
{
for (j = i + 1; j < (int)size; j++)
{
if (line[j] != 0)
{
line[i] = line[j];
line[j] = 0;
break;
}
}
}
}
for (i = 0; i < (int)size; i++)
{
if (line[i] == line[i + 1])
{
line[i] *= 2;
line[i + 1] = 0;
}
}
/**
 * slide_right - slides and merges an array of integers to the right
 * @line: points to an array of integers
 * @size: number of elements in array
 */
void slide_right(int *line, size_t size);
for (i = 0; i < (int)size; i++)
{
if (line[i] == 0)
{
for (j = i + 1; j < (int)size; j++)
{
if (line[j] != 0)
{
line[i] = line[j];
line[j] = 0;
break;
}
}
}
}
for (i = (int)size - 1; i >= 0; i--)
{
if (line[i] == line[i - 1])
{
line[i] *= 2;
line[i - 1] = 0;
}
}
}
