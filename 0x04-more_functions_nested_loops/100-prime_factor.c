#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long x,m;
	long num= 612852475143;
	double square= sqrt(num);

	for( x=1; x<=square; x++)
	{
		if(num % x ==0)
		{
			m=num / x;
		}
	}
	printf("%ld\n", m);
	return(0);
}
