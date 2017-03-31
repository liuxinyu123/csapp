#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_byte (byte_pointer p, size_t len);
void show_int (int val);
void show_float (float val);
void show_pointer (void *p);
void test_show_info (int val);

int main (int argc, char *argv[])
{
	test_show_info (12345);

	return 0;	
}

void show_byte (byte_pointer p, size_t len)
{
	for (size_t i = 0; i < len; ++i)
		printf ("%.2x", p[i]);
	printf ("\n");
}

void show_int (int val)
{
	show_byte ((byte_pointer)&val, sizeof (int));
}

void show_float (float val)
{
	show_byte ((byte_pointer)&val, sizeof (float));
}

void show_pointer (void *p)
{
	show_byte ((byte_pointer)&p, sizeof (void *));
}

void test_show_info (int val)
{
	int iVal = val;
	float fVal = (float) val;
	int *p = &iVal;

	show_int (iVal);
	show_float (fVal);
	show_pointer (p);
}
