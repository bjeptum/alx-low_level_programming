#include"main.h"
/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 * Return: Always 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}

/**
 * check_prime - check if prime number helper function
 * @n: number to check
 * @i: divisor to check
 * Return: Always 0 if not prime
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
