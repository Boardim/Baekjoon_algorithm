#include <iostream>
using namespace std;

int main() {
	long long int a, b;
	cin >> a >> b;
	if (a % 2 == 1) a += 1;
	if (a == 2) a = 4;
	if (b % 2 == 1) b--;

	if (b <= 3 || a > b) cout << 0;
	else cout << ((b - a) / 2 + 1) * (a + b) / 2;
}