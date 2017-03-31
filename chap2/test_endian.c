#include <stdio.h>

int main (int argc, char *argv[])
{
	unsigned int a = 0x12345678;
	unsigned char *p = (unsigned char*) &a;

	printf ("%x %x %x %x\n", p[0], p[1], p[2], p[3]);

	return 0;
}
