#include <iostream>

using std::cout;
using std::endl;

bool uadd_ok (unsigned short a, unsigned short b);

int main (int argc, char *argv[])
{
	unsigned short a1 = 33768;
	unsigned short a2 = 32767;
	//unsigned a2 = 0;

	if (uadd_ok (a1, a2))
		cout << "oK " << endl;

	return 0;
}

bool uadd_ok (unsigned short a, unsigned short b)
{
	unsigned short sum = a + b;
	return sum >= a && sum >= b;
}
