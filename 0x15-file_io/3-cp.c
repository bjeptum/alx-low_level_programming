#include "main.h"
#define BUF_SIZE 1024
/**
 * main - copy contents of one file to another
 * @argc: count of inputted arguments
 * @argv: array ofarguments
 *
 * Return: 0 else, -1  on failure
 */
int main(int argc, char **argv)
{
	FILE *file_from, *file_to;
	int c;
	struct stat st;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((c = fgetc(file_from)) != EOF)
		fputc(c, file_to);
	if (fclose(file_from) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(file_from));
		exit(100);
	}
	if (fclose(file_to) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(file_to));
		exit(100);
	}
	stat(argv[1], &st);
	if (chmod(argv[2], st.st_mode) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't change permissions for %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
