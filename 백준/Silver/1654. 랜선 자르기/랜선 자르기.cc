#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	unsigned int ans{ 0 }, arr[10000];
	unsigned int n, k, maxv{ 0 };
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > maxv) maxv = arr[i];
	}
	unsigned int left{ 1 }, right{ maxv }, mid;
	while (left <= right) {
		mid = (left + right) / 2;

		unsigned int value = 0;
		for (int i = 0; i < n; i++) {
			value += arr[i] / mid;
		}
		if (value >= k) {
			left = mid + 1;
			if (mid > ans) ans = mid;
		}
		else right = mid - 1;
	}
	cout << ans;
}