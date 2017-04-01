#include <iostream>

using std::cout;
using std::endl;
float sum_elements (float arr[], unsigned int len);

int main (int argc, char *argv[])
{
	float a[] = {23.2, 5.23, 54.21};
   	unsigned len = sizeof (a) / sizeof (float);

	cout << sum_elements (a, 0) << endl;;

	return 0;	
}

float sum_elements (float arr[], unsigned int len)
{
	float sum = 0;
	for (int i = 0; i < len; ++i)
		sum += arr[i];

	return sum;
}
