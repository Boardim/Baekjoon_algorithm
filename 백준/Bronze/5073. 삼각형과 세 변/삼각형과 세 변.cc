#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a[3];
	while (1) {
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if (a[0] == a[1] and a[1] == a[2] and a[0] == 0) break;
		if (a[0] + a[1] <= a[2]) cout << "Invalid\n";
		else if (a[0]==a[1]and a[1] == a[2]) cout << "Equilateral\n";
		else if (a[0] == a[1] or a[0] == a[2] or a[1] == a[2]) cout << "Isosceles\n";
		else cout << "Scalene\n";
	}
}