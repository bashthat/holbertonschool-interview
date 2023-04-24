#include "slide_line.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * slide_line - slides and merges an array of integers
 * @line: points to an array
 * @size: elements in array
 * @direction: SLIDE_LEFT or SLIDE_RIGHT
 * Return: one or zero depending on the hero
 */

int slide_line(int *line, size_t size, int direction)
{
int x, y;
if (direction == SLIDE_LEFT)
{
for (x = 0; x < (int)size; x++)
{
if (line[x] == 0)
{
for (y = x + 1; y < (int)size; y++)
{
if (line[y] != 0)
{
line[x] = line[y];
line[y] = 0;
break;
}
}
}
}
for (x = 0; x < (int)size - 1; x++)
{
if (line[x] == line[x + 1])
{
line[x] = line[x] + line[x + 1];
line[x + 1] = 0;
}
}
for (x = 0; x < (int)size; x++)
{
if (line[x] == 0)
{
for (y = x + 1; y < (int)size; y++)
{
if (line[y] != 0)
{
line[x] = line[y];
line[y] = 0;
break;
}
}
}
}
return (1);
}
else if (direction == SLIDE_RIGHT)
{
for (x = (int)size - 1; x >= 0; x--)
{
if (line[x] == 0)
{
for (y = x - 1; y >= 0; y--)
{
if (line[y] != 0)
{
line[x] = line[y];
line[y] = 0;
break;
}
}
}
}
for (x = (int)size - 1; x > 0; x--)
{
if (line[x] == line[x - 1])
{
line[x] = line[x] + line[x - 1];
line[x - 1] = 0;
}
}
for (x = (int)size - 1; x >= 0; x--)
{
if (line[x] == 0)
{
for (y = x - 1; y >= 0; y--)
{
if (line[y] != 0)
{
line[x] = line[y];
line;
}
}
}
}
return (1);
}
return (0);
}
// Path: holbertonschool-interview\0x09-slide_line\slide_line.h