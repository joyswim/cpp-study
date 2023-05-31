#include <iostream>
using namespace std;

int main()
{
	short year = SHRT_MAX;
	int sale = INT_MAX;
	long total_sale = LONG_MAX;

	cout << "short 크기 = " << sizeof(short) << "byte" << endl;
	cout << "int 크기 = " << sizeof(int) << "byte" << endl;
	cout << "long 크기 = " << sizeof(long) << "byte" << endl;

	cout << "short 최대값 = " << year << endl;
	cout << "int 최대값 = " << sale << endl;
	cout << "long 최대값 = " << total_sale << endl;

	cout << "short 최소값 = " << SHRT_MIN << endl;
	cout << "int 최소값 = " << INT_MIN << endl;
	cout << "long 최소값 = " << LONG_MIN << endl;
}