#include "slide_line.h"

/**
 * slide_line - slides and merges an array of integers
 * @line: points to an array
 * @size: elements in array
 * @direction: SLIDE_LEFT or SLIDE_RIGHT
 * Return: one or zero depending on the hero
 */

int slide_line(int *line, size_t size, int direction)
{
size_t i, j, k;
if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
return (0);
if (direction == SLIDE_LEFT)
{
for (i = 0; i < size; i++)
{
if (line[i] == 0)
continue;
for (j = i + 1; j < size; j++)
{
if (line[j] == 0)
continue;
if (line[i] == line[j])
{
line[i] += line[j];
line[j] = 0;
break;
}
else
break;
}
}
for (i = 0, k = 0; i < size; i++)
{
if (line[i] == 0)
continue;
line[k] = line[i];
if (i != k)
line[i] = 0;
k++;
}
}
else
{
for (i = size - 1; i < size; i--)
{
if (line[i] == 0)
continue;
for (j = i - 1; j < size; j--)
{
if (line[j] == 0)
continue;
if (line[i] == line[j])
{
line[i] += line[j];
line[j] = 0;
break;
}
else
break;
}
}
for (i = size - 1, k = size - 1; i < size; i--)
{
if (line[i] == 0)
continue;
line[k] = line[i];
if (i != k)
line[i] = 0;
k--;
}
}
return (1);
}
