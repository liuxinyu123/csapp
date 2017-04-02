#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_byte (byte_pointer p, size_t len);
int fun1 (unsigned word);
int fun2 (unsigned word);
void test_trun ();

int main (int argc, char *argv[])
{
	short sx = -12345;
	unsigned short usx = sx;
	int x = sx;
	unsigned ux = usx;
	unsigned uy = sx;

	printf ("sx = %d : \t", sx);
	show_byte ((byte_pointer)&sx, sizeof (short));
	printf ("usx = %u : \t", usx);
	show_byte ((byte_pointer)&usx, sizeof (unsigned short));
	printf ("x = %d : \t", x);
	show_byte ((byte_pointer)&x, sizeof (int));
	printf ("ux = %u : \t", ux);
	show_byte ((byte_pointer)&ux, sizeof (unsigned int));
	printf ("uy = %u : \t", uy);
	show_byte ((byte_pointer)&uy, sizeof (unsigned));

	test_trun ();

	return 0;	
}

void show_byte (byte_pointer p, size_t len)
{
	for (size_t i = 0; i < len; ++i)
		printf ("%.2x", p[i]);
	printf ("\n");
}

int fun1 (unsigned word)
{
	return (int) ((word) << 24 >> 24);
}

int fun2 (unsigned word)
{
	return ((int) word << 24) >> 24;
}

void test_trun ()
{
	int x = 53191;
	short sx = (short) x;
	int y = sx;
	printf ("x = %d : \t", x);
	show_byte ((byte_pointer)&x, sizeof (int));
	printf ("sx = %d : \t", sx);
	show_byte ((byte_pointer)&sx, sizeof (short));
	printf ("y = %d : \t", y);
	show_byte ((byte_pointer)&y, sizeof (int));
}
