#include <stdio.h>
#include <unistd.h>
/**
 * main - entry
 * Description: prints alphabet in lowercase \n
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i  < 26; i++)
	{
		putchar (alp[i]);
	}
	putchar('\n');
	return (0);
}
