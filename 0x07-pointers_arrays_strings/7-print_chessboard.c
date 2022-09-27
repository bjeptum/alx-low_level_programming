#include "main.h:"
/**
 * print_chessboard - prints the chess board
 * @a: character of the array making uo the chessboard
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			board[i][j] = empty;
	for (i = 0; i < 8; i++)
		board[1][i] = board[6][i] = p;
		board[0][0] = board[0][7] = board[7][0] = board[7][7] = r;
		board[0][1] = board[0][6] = board[7][1] = board[7][6] = k;
		board[0][2] = board[0][6] = board[7][2] = board[7][5] = b;
		board[0][3] = board[7][3] = q;
		board[0][4] = board[7][4] = k;
};
{
	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			putchar(reps[board[row][col]);
		putchar('\n');
	}
}
