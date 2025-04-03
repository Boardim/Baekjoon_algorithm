#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		int left[200];
		int right[200];
		for (int k = 0; k < m; k++) {
			cin >> left[k];
		}
		for (int k = 0; k < m; k++) {
			cin >> right[k];
		}

		int start[200]{ 0 };
		int end[200]{ 0 };
		int lcount{ 0 };
		int rcount{ 0 };
		for (int k = 0; k < m - 1; k++) {
			for (int j = k + 1; j < m; j++) {
				if (left[j] - left[k] == 500) {
					start[lcount++] = left[k];
				}
				if (right[j] - right[k] == 500) {
					end[rcount++] = right[k];
				}
			}
		}
		int count = 0;
		for (int k = 0; k < lcount; k++) {
			for (int j = 0; j < rcount; j++) {
				if (start[k] + 1000 == end[j]) count++;
			}
		}
		cout << count << "\n";
	}
}