#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print a quote using write function
 * 	Write(int fd.const void *buf.size_t count)
 *
 * Return: 1 (not success)
*/

int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
