#include <iostream>
using namespace std;

int dp[1001]{0};

int main() {
  int n;
  cin >> n;
  dp[1] = 1;

  for (int i = 2; i <= n; i++) {
    if (i % 2 == 1)
      dp[i] = dp[i - 1] * 2 - 1;
    else
      dp[i] = dp[i - 1] * 2 + 1;
    dp[i] %= 10007;
  }

  cout << dp[n];
}