#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int dp[50001]{0, 1, 2, 3, 1};

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= sqrt(n); i++) {
    dp[i * i] = 1;
  }

  for (int i = 1; i <= n; i++) {
    if (dp[i] == 1) {
      continue;
    }

    int cnt = 5;
    for (int k = 1; k * k <= i; k++) {
      int gap = i - k * k;
      cnt = min(cnt, dp[k * k] + dp[gap]);
    }

    dp[i] = cnt;
  }
  
  cout << dp[n];
}