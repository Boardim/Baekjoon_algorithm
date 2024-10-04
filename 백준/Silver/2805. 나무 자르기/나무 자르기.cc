#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary(vector<int> v, int len, int find) {
	int start{ 0 }, end{ v[len-1] };
	long long int mid = (start + end) / 2;
	while (start <= end) {
		long long int temp = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] - mid > 0) temp += v[i] - mid;
		}

		if (temp < find) {
			end = mid - 1;
		}
		else if (temp > find) {
			start = mid + 1;
		}
		else return mid;
		mid = (start + end) / 2;
	}
	return mid;
}

int main() {
	vector<int>v;
	int n, m;
	cin >> n >> m;
	v.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << binary(v, n, m);
}