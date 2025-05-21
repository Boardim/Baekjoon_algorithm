#include <iostream>
using namespace std;

int main() {
	bool arr[5][3];
	for (int i = 1; i <= 4; i++) {
		for (int k = 1; k <= 2; k++) {
			arr[i][k] = false;
		}
	}
	int n, m;
	cin >> n >> m;
	arr[n][m] = true;

	int howmany;
	cin >> howmany;

	char k;
	for (int i = 0; i < howmany; i++) {
		cin >> k;

		if (k == 'A') {
			if (n >= 3) {
				n = n - 2;
			}
			else {
				n = n + 2;
			}
		}
		else if (k == 'B') {
			if (n <= 2) {
				n = 3 - n;
			}
			else {
				n = 7 - n;
			}
			m = 3 - m;
		}
		else if (k == 'C') {
			n = 5 - n;
			m = 3 - m;
		}
		else {
			arr[n][m] = false;
			if (n == 1 && m == 1) {
				arr[n][++m] = true;
			}
			else if (n == 4 && m == 2) {
				arr[n][--m] = true;
			}
			else if (m == 1) {
				arr[--n][m] = true;
			}
			else if (m == 2) {
				arr[++n][m] = true;
			}
		}
	}
	cout << n << " " << m;
}