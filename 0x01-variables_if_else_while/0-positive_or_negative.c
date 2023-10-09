#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Determines and prints whether a number is
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Print the number */
printf("%d ", n);
/* Determine and print if the number is positive, zero, or negative */
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}

