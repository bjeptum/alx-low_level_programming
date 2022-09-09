#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *rand- Prints a random number and states whether it is +, - or zero.
 *
 *
 *
 * 
 * Return: Always 0.
 */
int main(void)
{		
		int n;
				
			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n < 0.0)
					printf("You entered a negative number.");
				    else if (n > 0.0)
					    printf("You entered a positive number.");
				        else
						printf("You entered 0.");
					return (0);
}
