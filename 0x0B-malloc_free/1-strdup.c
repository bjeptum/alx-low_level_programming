#include "main.h"
#include <string.h>
/**
 * _strdup - pointer to newly allocated space in memory
 * @str: copy of the string
 * Return: Always NULL if str is empty
 */
char *_strdup(char *str)
{
	int str_size;
	static char *cp;
	char *cp_offset;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for duplicate */
	str_size = strlen(str);
	cp = (char *) malloc(sizeof(char) * str_size + 1);
	if (cp == NULL)
	{
		return ((char *)NULL);
	}
	/* Copy string */
	cp_offset = cp;
	while (*str)
	{
		*cp_offset = *str;
		cp_offset++;
		str++;
	}
	*cp_offset = '\0';
	return (cp);
}
