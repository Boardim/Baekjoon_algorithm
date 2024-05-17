#include <iostream>
using namespace std;
int main() {
	int a,b,temp,max,i = 2;
	cin >> a >> b;
	if (b > a) {
		temp = b;
		b = a;
		a = temp;
	}
	for (int i = 1; i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			max = i;
		}
	}
	a = a / max;
	cout << max << endl << b * a;
}
