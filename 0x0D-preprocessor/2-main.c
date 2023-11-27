#include <stdio.h>
/**
 * main - prints the name of the file
 * Return: Always name of file
 */
#define _FILE_ printf("%s\n", __FILE__)
int main(void)
{
	_FILE_;
	return (0);
}
