#include"main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2:second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s3[len1 + i] = s2[i];
	}
	s3[len1 + len2] = '\0';

	return (s3);
}
