#include <iostream>

using std::cout;
using std::endl;

void tadd_ok (short a, short b);

int main (int argc, char *argv[])
{
	tadd_ok (32767, 4);
	tadd_ok (-32766, -10);

	return 0;
}

void tadd_ok (short a, short b)
{
	short sum = a + b;
	if (a > 0 && b > 0 && sum <= 0)
		cout << "upflow" << endl;
	if (a < 0 && b < 0 && sum >= 0)
		cout << "underflow" << endl;
}



