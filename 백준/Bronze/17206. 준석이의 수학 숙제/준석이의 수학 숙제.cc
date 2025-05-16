#include <iostream>
using namespace std;

int dp[80000];

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	for (int i = 1; i <= 80000; i++) {
		dp[i] = dp[i - 1];
		if (i % 3 == 0 || i % 7 == 0) dp[i] += i;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cout << dp[a] << "\n";
	}
}