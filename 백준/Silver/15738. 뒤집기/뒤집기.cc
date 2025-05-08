#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
	}

	int curPos = b;
	for (int i = 0; i < c; i++) {
		int input;
		cin >> input;

		if (input < 0) {
			
			if (curPos > a + input) curPos = a + input - (curPos - 1 - a);
		}
		else {
			if (curPos  <= input) curPos = input - curPos + 1;
		}
	}
	cout << curPos;
}