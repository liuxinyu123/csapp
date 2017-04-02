#include <iostream>

using std::cout;
using std::endl;

bool uadd_ok (unsigned a, unsigned b);

int main (int argc, char *argv[])
{
	unsigned a1 = 3454534233;
	unsigned a2 = 4534235;
	//unsigned a2 = 0;

	if (uadd_ok (a1, a2))
		cout << "oK " << endl;

	return 0;
}

bool uadd_ok (unsigned a, unsigned b)
{
	unsigned sum = a + b;
	return sum >= a && sum >= b;
}
