#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b, c;
	int d;
	cin >> a >> b >> c;
	if (a[0] != 'F' && a[0] != 'B') d = stoi(a) + 3;
	else if (b[0] != 'F' && b[0] != 'B') d = stoi(b) + 2;
	else if (c[0] != 'F' && c[0] != 'B') d = stoi(c) + 1;
	
	if ((d % 3) == 0) {
		if ((d % 5) == 0) cout << "FizzBuzz";
		else cout << "Fizz";
	}
	else {
		if ((d % 5) == 0) cout << "Buzz";
		else cout << d;
	}
}