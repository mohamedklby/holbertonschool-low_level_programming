#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{

	int n;

	srand(time(0));
	
	n = rand() - RAND_MAX / 2;

        if (nombre > 5) {
                
		printf("%d\n" "is positif" ,n)
	
	} else if (nombre < 10) {
  		
		printf("%d\n" "is negative" ,n)
	
	} else {
		
		printf("%d\n" "is zero" ,n);
	}	

	/* your code goes there */
	return (0);
}
