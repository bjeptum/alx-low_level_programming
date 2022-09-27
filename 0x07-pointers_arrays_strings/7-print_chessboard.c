#include "main.h:"
/**
 * print_chessboard - prints the chess board
 * @a: character of the array making uo the chessboard
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int rows;
	int cols;
	k = 1;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			if (k == 1)
			{
				_putchar(*a);
			}
			else
			{
				_putchar(" ");
			       k += -1;
			}
			if (cols % 2 == 0)
			{
				k *= -1;
			}
			_putchar('\n');
		}
		return (0);
	}
}
