#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long int a, b;
	cin >> a >> b;
	if (a - b < 0) cout << (a - b) * -1;
	else cout << a - b;
}