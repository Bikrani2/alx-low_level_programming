#include <stdio.h>
#include <stdio.h>
/**
 * This program will assign a random number to the variable n each time it is executed.
 * Return if it is negative or positive 
 */
int main(void) 
{
	int n ;
	printf(" add a number: ");
	scanf("%d", &n);
	if ( n > 0 )
		printf("is positive");
	else if ( n < 0 )
		printf("is negative");
	else 
		printf("is zero");
}
