#include <stdio.h>

/**
 * main - lowercase alphabets
 *
 * Return: Always (Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}