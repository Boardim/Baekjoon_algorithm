#include <iostream>
using namespace std;

int arr[100000];

int main() {
	int n;
	cin >> n;

	int max = -1000;
	int currentMax = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		currentMax += arr[i];

		if (currentMax > max) {
			max = currentMax;
		}
		if (currentMax < 0) {
			currentMax = 0;
		}

	}
	cout << max;
}