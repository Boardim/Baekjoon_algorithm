#include <iostream>
using namespace std;
int main () {
	int a, b, c, d, e, f,x,y,num;
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999; i < 1000; i++) {
		for (int k = -999; k < 1000; k++) {
			if (a * i + b * k == c && d * i + e * k == f) {
				printf("%d %d", i, k);
				break;
			}
		}
	}
}