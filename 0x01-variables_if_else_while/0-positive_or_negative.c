#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - see if the number is positive or negative or zero 
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n = 0)
	{
		printf("%d is %s\n", n, "is zero");
	}

	else
	printf("%d is %s\n", n, "is positive");
	return (0);
}
