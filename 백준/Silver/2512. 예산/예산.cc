#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int goal, n;
vector<int>wow;

void binary_search(int left, int right) {
	int low = right;
	int mid;
	while (left <= right) {
		int sum = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < n; i++) {
			sum += min(mid, wow[i]);
		}
		if (sum > goal) {
			right = mid - 1;
		}
		else {
			low = mid;
			left = mid + 1;
		}
	}
	cout << low;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		wow.push_back(a);
	}
	cin >> goal;
	sort(wow.begin(), wow.end());
	binary_search(0, wow[n-1]);
}