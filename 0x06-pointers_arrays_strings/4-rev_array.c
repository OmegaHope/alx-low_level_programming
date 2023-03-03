#include "main.h"

/**
 * reverse_array - reverse the array's members position
 * @a: a pointer variable points to array
 * @n: a variable used in loop as counter
 * @i: a variable used in loop as counter
 */

void reverse_array(int *a, int n)
{
	  int i;

	  i = n-1;
	  while (i >= 0)
	  {
		  if (i != n-1)
		  {
			  printf(", ");
		  }
		  printf("%d", a[i]);
		  i--;
	  }
	  printf("\n");
}
