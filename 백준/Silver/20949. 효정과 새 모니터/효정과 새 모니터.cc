#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) {
	return a.first > b.first;
}

int main() {
	int n;
	cin >> n;

	vector<pair<int, int>>v;
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;

		v.push_back({ a * a + b * b, i });
	}
	
	stable_sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].second << "\n";
	}
}