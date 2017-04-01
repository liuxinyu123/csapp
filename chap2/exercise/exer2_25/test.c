#include <stdio.h>

float sum_elements (float arr[], unsigned len);

int main (int argc, char *argv[])
{
	float a[] = {2.12, 42.2, 43.1};
	unsigned len = sizeof (a) / sizeof (float);

	unsigned b = 0;
	b--;
	printf ("%u\n", b);

	printf ("%f\n", sum_elements (a, 0));

	return 0;
}

float sum_elements (float arr[], unsigned len)
{
	int i;
	float sum = 0;
	//for (i = 0; i <= len - 1; ++i)
	for (i = 0; i < len; ++i)
	{
		sum += arr[i];
		printf ("hello\n");
	}

	return sum;
}

