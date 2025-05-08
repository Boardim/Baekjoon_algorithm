#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int temp = a * c;
	for (int i = 1; i <= c; i++) {
		cout << temp + b * i << " ";
	}
}