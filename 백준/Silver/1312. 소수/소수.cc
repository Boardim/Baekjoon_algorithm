#include <iostream>
using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	int answer;

	if (a % b == 0) {
		cout << 0 << "\n";
		return 0;
	}

	if (a > b) a %= b;
		for (int i = 0; i < n ; i++) {
			a *= 10;
			answer = a / b;
			a = a % b;
		
		}
	

	cout << answer;
	return 0;
}