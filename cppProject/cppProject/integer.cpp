#include <iostream>
using namespace std;

int main()
{
	short year = SHRT_MAX;
	int sale = INT_MAX;
	long total_sale = LONG_MAX;

	cout << "short ũ�� = " << sizeof(short) << "byte" << endl;
	cout << "int ũ�� = " << sizeof(int) << "byte" << endl;
	cout << "long ũ�� = " << sizeof(long) << "byte" << endl;

	cout << "short �ִ밪 = " << year << endl;
	cout << "int �ִ밪 = " << sale << endl;
	cout << "long �ִ밪 = " << total_sale << endl;

	cout << "short �ּҰ� = " << SHRT_MIN << endl;
	cout << "int �ּҰ� = " << INT_MIN << endl;
	cout << "long �ּҰ� = " << LONG_MIN << endl;
}