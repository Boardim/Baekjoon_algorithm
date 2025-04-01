#include <iostream>

using namespace std;

int main() {
	long long int a, b, c;
	cin >> a >> b >> c;

	int right = c - b;
	if (right <= 0) cout << -1;
	else {
		cout << a / right + 1;
	}

}
