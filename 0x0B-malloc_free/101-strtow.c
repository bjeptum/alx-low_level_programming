#include "main.h"
/**
 * strtow - splits a string into words
 * @str: array of strings to be split
 * Each element of this array contain a singleword
 * last element of the returned array should be NULL
 * Words are separated by spaces
 * Return: NULL if str == NULL or str == "" or fails
 */
char** strtow(char* str) 
{
	/* Check if the input string is NULL or empty */
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	/* Count the number of words */
	int count = 1;  // At least one word

	for (char* ptr = str; *ptr != '\0'; ++ptr)
	{
		if (*ptr == ' ')
		{
			count++;
		}
	}

	/* Allocate memory for an array of pointers */
	char** words = (char**)malloc(sizeof(char*) * (count + 1));
	if (words == NULL)
	{
		return (NULL); // Memory allocation failed
	}

	/* Copy each word into the array */
	char* token = strtok(str, " ");
	for (int i = 0; i < count; ++i)
	{
		words[i] = (char*)malloc(strlen(token) + 1);
		if (words[i] == NULL)
		{
			/* Memory allocation failed, clean up and return NULL */
			for (int j = 0; j < i; ++j) {
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strcpy(words[i], token);
		token = strtok(NULL, " ");
	}

	words[count] = NULL;  // Set the last element to NULL
	return (words);
}
