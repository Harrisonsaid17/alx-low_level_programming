#include <stdio.h>
#include <stdlid.h>
#include <string.h>
/**
 * main -entry point
 * Description: print lowercase alphabets
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
