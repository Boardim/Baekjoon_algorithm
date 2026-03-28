#include <iostream>
using namespace std;

char arr[101][101];

int main() {
  int a, b;
  cin >> a >> b;

  char temp;
  for (int i = 1; i <= a; i++) {
    for (int k = 1; k <= b; k++) {
      cin >> temp;

      arr[i][k] = temp;
      arr[i][b * 2 - k + 1] = temp;

      arr[a * 2 - i + 1][k] = temp;
      arr[a * 2 - i + 1][b * 2 - k + 1] = temp;
    }
  }

  int c, d;
  cin >> c >> d;

  if (arr[c][d] == '.')
    arr[c][d] = '#';
  else
    arr[c][d] = '.';

  for (int i = 1; i <= a * 2; i++) {
    for (int k = 1; k <= b * 2; k++) {
      cout << arr[i][k];
    }
    cout << "\n";
  }
}