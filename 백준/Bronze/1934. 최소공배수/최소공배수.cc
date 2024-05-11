#include <iostream>
using namespace std;

int main() {
	int n,x,y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		int min = 0;
		if (x >= y) min = y;
		else min = x;

		for (int j = min; j > 0; j--) {
			if (x % j == 0 && y % j == 0) {
				cout << x * (y / j) << "\n";
				break;
			}
		}
	}
}