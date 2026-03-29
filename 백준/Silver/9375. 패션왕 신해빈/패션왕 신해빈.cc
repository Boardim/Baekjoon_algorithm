#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

  int n;
  string inp1, inp2;
  cin >> n;
  for (int i = 0; i < n; i++) {
    map<string, int> m;
    int number;
    cin >> number;
    for (int k = 0; k < number; k++) {
      cin >> inp1 >> inp2;
      m[inp2]++;
    }

    int count = 1;

    for (auto itr : m) {

      if (m.size() > 1) {
        count *= (itr.second + 1);
      } else
        count += (itr.second);
    }
    count -= 1;

    cout << count << "\n";
  }
}