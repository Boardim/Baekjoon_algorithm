#include <iostream>
using namespace std;
int main() {
	string a;
	long long int l, sum{ 0 }, x{ 1 };
	cin >> l >> a;
	for (int i = 0; i < l; i++) {
		sum = (sum + (a[i] - 96) * x) % 1234567891;
		x = (x * 31) % 1234567891;
	}
	cout << sum;
}