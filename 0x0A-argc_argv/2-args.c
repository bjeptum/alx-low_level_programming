#include <stdio.h>
/**
 * main - prints the arguments passed
 * @argc: number of command line arguments
 * @argv: an array of commandline arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",  argv[i]);
	}
	return (0);
}
