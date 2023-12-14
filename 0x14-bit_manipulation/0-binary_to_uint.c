#include"main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string
 * Return: NULL on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		val = val * 2 + (b[i] - '0');
		i++;
	}
	return (val);
}
