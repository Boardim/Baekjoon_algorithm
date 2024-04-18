#include <iostream>
using namespace std;
int main() {
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;
	int x = c - a1;
	if (x * n0 >= a0&&x*100>=a0) {
		cout << "1";
	}
	else cout << "0";
}