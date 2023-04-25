#include "slide_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * slide_line - slides and merges an array of integers
 * @line: array of integers
 * @size: size of array
 * @direction: direction to slide and merge
 * Return: 1 on success, 0 on failure
 */

int slide_line(int *line, size_t size, int direction)
{
    if (!line || (direction != SLIDE_LEFT && direction != SLIDE_RIGHT))
        return (0);
    if (direction == SLIDE_LEFT)
        slide_left(line, size);
    else
        slide_right(line, size);
    return (1);
}

/**
 * slide_left - slides and merges an array of integers to the left
 * @line: array of integers
 * @size: size of array
 */

void slide_left(int *line, size_t size)
{
    int x = 0, y = 1, temp = 0;

    for (; y < (int)size; y++)
    {
        if (line[y] == 0)
            continue;
        temp = line[x];
        if (temp == line[y])
        {
            line[x++] = temp + line[y];
            line[y] = 0;
        }
        else if (temp == 0)
        {
            line[x] = line[y];
            line[y] = 0;
        }
        else
            line[++x] = line[y];
    }
/**
 * slide_right - slides and merges an array of integers to the right
 * @line: array of integers
 * @size: size of array
*/
void slide_right(int *line, size_t size)
{
    int x = size - 1, y = size - 2, temp = 0;

    for (; y >= 0; y--)
    {
        if (line[y] == 0)
            continue;
        temp = line[x];
        if (temp == line[y])
        {
            line[x--] = temp + line[y];
            line[y] = 0;
        }
        else if (temp == 0)
        {
            line[x] = line[y];
            line[y] = 0;
        }
        else
            line[--x] = line[y];
    }
}
}