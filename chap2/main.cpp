#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	char *p = nullptr;
	cout << "char: " << sizeof (char) << endl;
	cout << "unsigned char: " << sizeof (unsigned char) << endl;
	cout << "short: " << sizeof (short) << endl;
	cout << "unsigned short: " << sizeof (unsigned short) << endl;
	cout << "int: " << sizeof (int) << endl;
	cout << "unsigned int: " << sizeof (unsigned int) << endl;
	cout << "float: " << sizeof (float) << endl;
	cout << "double: " << sizeof (double) << endl;
	cout << "int32_t: " << sizeof (int32_t) << endl;
	cout << "int64_t: " << sizeof (int64_t) << endl;
	cout << "pointer: " << sizeof (p) << endl;

	return 0;

}
