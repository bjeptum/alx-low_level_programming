#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: 0 (exit)
 */
int main(void)
{

	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	double floatType;

	fprintf(stderr,"Size of a char: %zu byte(s)\n", sizeof(charType));
	fprintf(stderr,"Size of an int: %zu byte(s)\n", sizeof(intType));
	fprintf(stderr,"Size of a long int: %zu byte(s)\n", sizeof(longintType));
	fprintf(stderr"Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	fprintf(stderr"Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);

}
