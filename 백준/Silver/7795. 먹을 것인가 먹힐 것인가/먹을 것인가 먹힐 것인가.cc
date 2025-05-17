#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>A, B;
int binary(int value, int start, int end) {
	int idx = 0;
	int mid = 0;
	while (start <= end) {
		mid = (start + end) / 2;
		if (value > B[mid]) {
			start = mid + 1;
			idx = mid + 1;
		}
		else {
			end = mid - 1;
			idx = mid;
		}
	}
	return idx;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b;
		int sum = 0;
		cin >> a >> b;
		for (int k = 0; k < a; k++) {
			int input;
			cin >> input;
			A.push_back(input);
		}
		for (int k = 0; k < b; k++) {
			int input;
			cin >> input;
			B.push_back(input);
		}
		sort(B.begin(), B.end());
		for (int k = 0; k < a; k++) {
			sum += binary(A[k], 0, b-1);
		}
	
		cout << sum << "\n";
		A.clear();
		B.clear();
	}
}