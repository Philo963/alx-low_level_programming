#include <stdio.h>

/**
 * main - Entry level
 *
 * Description: Prints alphabet in lowercase then in uppercase.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - z*/
	while (CH <= 'z')
	{
		putchar(CH);
			ch++;
	}
	putchar('\n')

	return (0);
}

