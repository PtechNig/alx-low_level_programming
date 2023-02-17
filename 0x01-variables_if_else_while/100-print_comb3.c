#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a  = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			if (a == 57 && b == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

