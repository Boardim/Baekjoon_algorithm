#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string arr[500000];

int binary_search(int low, int mid, int end, string a) {
	while (low <= end) {
		mid = (low + end) / 2;
		if (arr[mid] == a) {
			return 1;
		}
		else if (arr[mid] < a) low = mid+1;
		else end = mid-1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr, arr + n);

	int count{ 0 };
	vector<string>v;
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;
		if (binary_search(0, n / 2, n - 1, a) == 1) {
			count++;
			v.push_back(a);
		}
	}

	sort(v.begin(), v.end());
	cout << count << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}
