#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool arr[2001][2001];

int main() {
  int N;
  string s;

  cin >> N;
  cin >> s;

  int baseX = 1000;
  int baseY = 1000;

  arr[1000][1000] = true;
  for (char k : s) {
    if (k == 'W') {
      baseX -= 1;

    } else if (k == 'E')
      baseX += 1;
    else if (k == 'N')
      baseY += 1;
    else if (k == 'S')
      baseY -= 1;

    arr[baseX][baseY] = true;
  }

  int cnt = 0;
  for (int i = 0; i <= 2000; i++) {
    for (int k = 0; k <= 2000; k++) {
      if (arr[i][k] == true)
        cnt++;
    }
  }
  cout << cnt;

  return 0;
}
