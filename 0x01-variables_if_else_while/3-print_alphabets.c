#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A-z*/
	while (CH <= 'z')
	{
		putchar(CH);
			ch++;
	}
	putchar('\n')

	return (0);
}

