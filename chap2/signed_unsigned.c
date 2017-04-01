#include <stdio.h>

int main (int argc, char *argv[])
{
	short s = -12345;
	unsigned short us = (unsigned short) s;

	printf ("%d %u\n", s, us);

	unsigned int i = 4294967295;
	int j = (int) i;
	printf ("%u %d\n", i, j);

	return 0;
}
