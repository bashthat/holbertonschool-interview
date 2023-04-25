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
    if (!line || (direction != SLIDE_LEFT && direction != SLIDE_RIGHT) || size < 1)
        return (0);
    if (direction == SLIDE_LEFT)
        mergeL(line, size);
    else
        mergeR(line, size);
    return (1);
}

/**
 * slide_left - slides and merges an array of integers to the left
 * @line: array of integers
 * @size: size of array
 */

void mergeL(int *line, size_t size)
{
    int xyz = 1, x = 0, q = size -1;

    while (xyz <= q)
    {
        if (line[xyz] == 0)
        {
            xyz++;
            continue;
        }
        else
        {
            if (line[x] == line[xyz])
            {
                line[x] = line[x] + line[xyz];
                line[xyz] = 0;
                x++;
            }
            else if (line[x] == 0)
            {
                line[x] = line[xyz];
                line[xyz] = 0;
            }
            else
                x++;
        }
    }
}
/**
 * mergeR - slides and merges an array of integers to the right
 * @line: array of integers
 * @size: size of array
 */

void mergeR(int *line, size_t size)
{
    int xyz = size - 2, x = size - 1;

    while (xyz >= 0)
    {
        if (line[xyz] == 0)
        {
            xyz--;
            continue;
        }
        else
        {
            if (line[x] == line[xyz])
            {
                line[x] = line[x] + line[xyz];
                line[xyz] = 0;
                x--;
            }
            else if (line[x] == 0)
            {
                line[x] = line[xyz];
                line[xyz] = 0;
            }
            else
                x--;
        }
    }
}