#include <iostream>
#include <cmath>
using namespace std;
bool arr[260000];
int main() {
	int n;
	for (int i = 2; i <= sqrt(246912); i++) {
		bool prime = true;
		int a = i;
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				prime = false;
				break;
			}
		}

		if (prime) {
			while (a <= 246912) {
				a = a + i;
				arr[a] = true;
			}
		}
	}

	while (cin >> n && n != 0) {
		int count = 0;
		for (int i = n+1; i <= 2*n; i++) {
			if (arr[i] == false) count++;
		}
		cout << count << "\n";
	}
}