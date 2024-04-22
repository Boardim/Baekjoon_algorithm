#include <iostream>
using namespace std;
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	if (w - x < x) x = w - x;
	if (h - y < y) y = h - y;
	if (x > y) cout << y;
	else cout << x;
}