#include <stdio.h>

/**
 * main - prints number of arguments
 * Oargc: argument count
 * Oargv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc -1);
	return (0);
}
