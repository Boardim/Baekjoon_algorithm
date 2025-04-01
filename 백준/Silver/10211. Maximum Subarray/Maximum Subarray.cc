#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int size;
		cin >> size;

		int arr[1000]{ 0 };
		for (int k = 0; k < size; k++) {
			cin >> arr[k];
		}

		int max = arr[0];
		for (int k = 0; k < size; k++) {
			int sum = 0;
			for (int j = k; j < size; j++) {
				sum += arr[j];
				if (sum > max) max = sum;
			}
		}

		cout << max << "\n";

	}
}