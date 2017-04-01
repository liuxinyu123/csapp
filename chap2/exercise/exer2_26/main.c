#include <stdio.h>
#include <string.h>

int str_longer (char *s, char *t);

int main (int argc, char *argv[])
{
	char a[] = "hello";
	char b[] = "word";

	printf ("%d\n", str_longer (a, b));

	return 0;
}

int str_longer (char *s, char *t)
{
	return strlen (s) > strlen (t);
}


