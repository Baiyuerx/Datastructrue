#include <iostream>

using namespace std;

enum { ALIGN = 8 };

int ROUND_UP(int i)
{
	return ((i + ALIGN - 1) & ~(ALIGN - 1));
}

int main()
{
	cout << ROUND_UP(10) << endl;
	return 0;
}