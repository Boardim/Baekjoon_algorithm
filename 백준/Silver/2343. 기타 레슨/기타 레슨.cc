#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int>v;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
		v.push_back(a);
	}
	int start = *max_element(v.begin(), v.end());
	int end = sum;

	int result;
	while (start <= end) {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		int mid = (start + end) / 2;
		
		int count = 0;
		int tempsum = 0;
		for (int i = 0; i < n; i++) {
			if (tempsum + v[i] > mid) {
				tempsum = 0;
				count++;
			}
			tempsum += v[i];
		}
		if (tempsum != 0) count++;

		if (count > m) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
			result = mid;
		}
		
	}
	cout << result;
}
