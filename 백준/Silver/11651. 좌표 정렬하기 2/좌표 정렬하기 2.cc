#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int compare(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}

int main() {
	int n, a, b;
	cin >> n;
	vector<pair<int, int>>v;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}