#include <stdlib.h>
#include <time.h>
# include <stdio.h>

/**
 * main - Prints a text according to number
 *
 *Return: Always (Success)
 */

int main(void)
{

int n, emd;
srand(time(0));
n = rand() - RAND_MAX / 2;
emd = n % 10;
if (emd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, emd);
}

else if (emd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, emd);
}
else if (emd < 6 != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, emd);
}
return (0);
}
