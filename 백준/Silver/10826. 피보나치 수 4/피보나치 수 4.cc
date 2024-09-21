#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string fib[10001];
string add(string a, string b) {
	string ans = "";
	int carry = 0;
	int num = 0;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.length() < b.length()) {
		a += "0";
	}

	while (a.length() > b.length()) {
		b += "0";
	}
	for (int i = 0; i < a.length(); i++) {
		num = ((a[i] - '0') + (b[i] - '0') + carry) % 10;
		ans += to_string(num);
		carry = ((a[i] - '0') + (b[i] - '0') + carry) / 10;
	}
	if (carry != 0) {
		ans += to_string(carry);
	}

	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
	fib[0] = "0", fib[1] = "1";
	for (int i = 2; i < 10001; i++) {
		fib[i] = add(fib[i - 1], fib[i - 2]);
	}
	int n;
	cin >> n;
	cout << fib[n];
}