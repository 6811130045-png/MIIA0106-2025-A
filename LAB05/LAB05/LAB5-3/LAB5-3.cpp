#include <iostream>
using namespace std;
// Call by Value
void swapCbV(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapCbR(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


int main() {
	int a = 10, b = 20;
	cout << "Before function Call by Value, a = " << a << " b = " << b << endl;
	swapCbV(a,b); // ส่งค่า a ไปแบบ copy
	cout << "After function Call by Value, a = " << a << " b = " << b << endl;
	cout << "____________________________________________________________________" << endl;;
	cout << "Before function Call by Reference, a ="<< a << " b = " << b << endl;
	swapCbR(a, b); // เรียกแบบ reference
	cout << "After function Call by Reference, a =" << a << " b = " << b << endl;
	return 0;
}


