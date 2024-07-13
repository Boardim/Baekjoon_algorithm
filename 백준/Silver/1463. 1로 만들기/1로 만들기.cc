#include <iostream>
using namespace std;
int dp[1000001];
int main() {
	dp[1] = 0;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		int temp = 0;
		//3번 -1
		
		dp[i] = dp[i - 1] + 1;

		//2번 %2
		if (i % 2 == 0) {
			temp = dp[i / 2] + 1;
			if (dp[i] > temp) {
				dp[i] = temp;
			}
		}
		//1번 %3
		if (i % 3 == 0) {
			temp = dp[i / 3] + 1;
			if (dp[i] > temp) {
				dp[i] = temp;
			}
		}
	}

	cout << dp[n];
}