#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
