#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(),v.end());
	int sum= 0;
	for (int i = 0; i < n; i++) {
		sum += v[i] * (n - i);
	}
	cout << sum;
}