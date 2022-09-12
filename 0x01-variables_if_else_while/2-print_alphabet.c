#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
char main (void)
{
       char ch;

	for (ch = ‘a’; ch <= ‘z’; ch++)
		putchar(ch);
		putchar(‘\n’);
		getch();
	return(0);
}
