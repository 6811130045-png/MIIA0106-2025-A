#include <iostream>
#include <cmath>
using namespace std;

int maxOfThree(int a, int b, int c) {
	if (a >= b && a >= c) {
		cout << a;
		return a;
	}
	else if(b >= c && b >= a)
	{
		cout << b;
		return b;
	}
	else if (c >= a && c >= b) {
		cout << c;
		return c;
	}
}

int main() {
	int a, b, c;
	cout << "Enter A :";
	cin >> a;
	cout << "Enter b :";
	cin >> b;
	cout << "Enter c :";
	cin >> c;

	int max = maxOfThree(a, b, c);
	cout << "The largest number : " << max << endl;
	return 0;
}