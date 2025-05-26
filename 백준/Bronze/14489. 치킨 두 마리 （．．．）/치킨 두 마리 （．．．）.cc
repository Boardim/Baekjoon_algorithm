#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	c = c * 2;
	if((a+b) < c) {
		cout << a + b;
	}
	else {
		cout << (a + b) - c;
	}
}