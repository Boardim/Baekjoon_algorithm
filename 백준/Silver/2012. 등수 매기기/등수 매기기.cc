#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>result;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		result.push_back(k);
	}
	sort(result.begin(), result.end());

	long long int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += fabs(result[i] - (i + 1));
	}
	cout << sum;
}