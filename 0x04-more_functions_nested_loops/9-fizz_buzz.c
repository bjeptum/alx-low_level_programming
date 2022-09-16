#include <stdio.h>
/**
 * main -  prints the numbers from 1 to 100
 * Description - print multiples of:  3 Fizz, 5 Buzz, 15 FizzBuzz
 * Return: 0 (exit)
 */
int main(void)
{
	int i;

	for (i >= 1 || i <= 100;)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz\t");
		else if ((i % 3) == 0)
			printf("Fizz\t");
		else if ((i % 5) == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	i++
	}
	return (0);
}
