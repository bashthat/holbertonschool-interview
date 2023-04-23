#include "menger.h"
/**
 * menger - 2D Menger Sponge
 * @level: level of the Menger Sponge
 * Return: NULL/VOID (void)
 */
void menger(int level)
{
int i, j, k, l, size;
char c;
if (level < 0)
return;
size = pow(3, level);
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
c = '#';
k = i;
l = j;
while (k > 0 || l > 0)
{
if (k % 3 == 1 && l % 3 == 1)
c = ' ';
k /= 3;
l /= 3;
}
printf("%c", c);
}
printf("\n");
}
}
