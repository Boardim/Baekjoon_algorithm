#include <iostream>
using namespace std;
int main() {
	int minx{ 10001 }, miny{ 10001 }, maxx{ -10001 }, maxy{ -10001 };
	int n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a < minx) minx = a;
		if (b < miny) miny = b;
		if (a > maxx) maxx = a;
		if (b > maxy) maxy = b;
	}
	cout << ((maxx - minx) * (maxy - miny));
}