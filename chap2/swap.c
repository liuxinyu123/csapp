#include <stdio.h>

void inplace_swap (int *a, int *b);
void array_inverse (int *arr, int len);
void print_array (int *arr, int len);

int main (int argc, char *argv[])
{
	int iArr[] = {2, 43, 54, 23, 53, 34 , 25};
	int sz = sizeof (iArr) / sizeof (int);

	print_array (iArr, sz);
	array_inverse (iArr, sz);
	print_array (iArr, sz);

	return 0;
}

void inplace_swap (int *a, int *b)
{
	*b = *a ^ *b;
	*a = *a ^ *b;
	*b = *a ^ *b;
}

void array_inverse (int *arr, int len)
{
	int first = 0;
	int last = len - 1;
	for (; first < last; ++first, --last)
		inplace_swap (&arr[first], &arr[last]);
}

void print_array (int *arr, int len)
{
	for (int i = 0; i < len; ++i)
		printf ("%d ", arr[i]);
	printf ("\n");
}
