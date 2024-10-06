#include <iostream>
using namespace std;

long long int GCD(long long int x, long long int y) {
	if (x % y == 0) {
		return y;
	}
	return GCD(y, x % y);
}

int main() {
	long long int n, m;
	cin >> n >> m;
	cout << n*m/GCD(n, m);
}