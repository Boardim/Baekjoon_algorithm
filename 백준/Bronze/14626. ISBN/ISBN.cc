#include <iostream>
using namespace std;

int main() {
  char inp;
  int sum = 0;
  bool oddCheck = false;
  for (int i = 1; i <= 13; i++) {
    cin >> inp;
    if (inp == '*') {
      if (i % 2 == 1)
        oddCheck = true;
      continue;
    }

    if (i % 2 == 1) {
      sum += inp - '0';
    } else
      sum += (inp - '0') * 3;
  }

  int ans = 0;
  for (int i = 0; i < 10; i++) {
    ans = i;
    if (!oddCheck)
      ans *= 3;

    if ((sum + ans) % 10 == 0)
      break;
  }

  if (!oddCheck)
    ans /= 3;
  cout << ans;
}