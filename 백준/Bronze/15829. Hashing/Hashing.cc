#include <iostream>
#include <cmath>
using namespace std;
int main() {
	string a;
	int l, sum{ 0 };
	cin >> l >> a;
	for (int i = 0; i < l; i++) {
		sum += (a[i] - 96) * static_cast<int>(pow(31, i)) % 1234567891;
	}
	cout << sum;
}