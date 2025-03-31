#include <iostream>
using namespace std;

long long int factorial(int n, int range = 1) {
	if (n <= range) return range;
	return n * factorial(n - 1, range);
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		if (b == 0) cout << 0 << "\n";
		else {
			if (a * 2 > b && a!=b) {
				a = b - a;
			}
			
			long long int up = factorial(b, b - a + 1);
			long long int down = factorial(a);
			cout << up / down << "\n";


		}
	}
}