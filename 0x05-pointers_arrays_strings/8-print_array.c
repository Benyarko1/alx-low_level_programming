#include "main.h"
/**
 * print _array - the function name
 * @a: parameter 1
 * @n: parameter 2
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

	if (i < 1 - 1)
		printf(", ");

}
	printf("/n");
}
