#include "function_pointers.h"
/**
 * print_name - prints a name using function pointer
 * @f:pointer to a function
 * @name: name to be printed
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
