#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int>vec;
	vec.push_back(0);
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	vector<int>dp;
	dp.push_back(vec[0]);

	//vec 마지막 index = n
	for (int i = 1; i <= n; i++) {
		dp.push_back(dp[i - 1] + vec[i]);
	}


	int left = 0;
	int right = 1;

	int sum;
	int cnt = 0;
	while (left <= right) {
		if (right > n || left > n) break;
		sum = dp[right] - dp[left];


		if (sum < m) {
			right = right + 1;
		}
		else if (sum > m) {
			left = left + 1;
		}
		else if (sum == m) {
			cnt++;
			right = right + 1;
		}
	}
	cout << cnt;
}