#include<iostream>
using namespace std;

int main() {
	int fib[100] = { 0 },n;
	fib[0] = 0, fib[1] = 1, fib[2] = 1;
	cin >> n;
	for (int i = 3; i <= n; i++) {
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	cout << fib[n] << ' ' << n - 2;
}