#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/main - Determine if a number is positive or  negative
*
* Return: 0 (exit)
*/
int main(void)
{
			int n;
			srand(time(0));
			n = rand() - RAND_MAX / 2;
			if (n>0)
			printf("%d is positive\n", n);
			else if (n=0)
			       printtf("%d	is zero\n", n);
			else
			printf("%d is negative\n", n);
																												return (0);
																												}
