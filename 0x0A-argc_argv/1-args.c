#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: number of command line arguments
 * @argv: an array of commandline arguments
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
