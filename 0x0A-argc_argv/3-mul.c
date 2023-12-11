#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipliestwo integers
 * @argc: number of command line arguments
 * @argv: an array of commandline arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mul;
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = (a * b);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
}
