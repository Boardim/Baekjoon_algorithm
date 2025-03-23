#include <iostream>
using namespace std;

int dp[1000001];

int main() {
	dp[0] = 1;
	dp[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i < 1000001; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	}
	cout << dp[n];
}