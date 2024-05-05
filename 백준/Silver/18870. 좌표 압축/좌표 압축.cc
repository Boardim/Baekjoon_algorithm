#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000001];
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, count{ 0 };
	vector<pair<int, int>>v;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		v.push_back(make_pair(a,i));
	}
	sort(v.begin(), v.end());
	for (int i = 1; i < n; i++) {
		if (v[i].first != v[i - 1].first) {
			count++;
		}
		arr[v[i].second] = count;
	}
	arr[v[0].second] = 0;
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
}