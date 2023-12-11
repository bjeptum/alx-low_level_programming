#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of a program
 * @argc: number of command line arguments
 * @argv: an array of commandline arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		fprintf(stderr, "Error:No arguments.\n");
		return (1);
	}	
}
