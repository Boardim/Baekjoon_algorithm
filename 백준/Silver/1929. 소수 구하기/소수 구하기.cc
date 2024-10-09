#include <iostream>
using namespace std;
int arr[1000001]{ 0 };
int main() {
	for (int i = 2; i <= 1000; i++) {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int num = i+i;
		int prime = 0;

		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				prime = 1;
				break;
			}
		}

		if (prime == 0) {
			while (num <= 1000000) {
				arr[num] = 1;
				num = num + i;
			}
		}
	}
	arr[1] = 1;
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (arr[i] == 0) cout << i << "\n";
	}
}