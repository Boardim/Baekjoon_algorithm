#include <iostream>
using namespace std;

void rec(int i, int k, int num) {
	if (i / num % 3 == 1 && k / num % 3 == 1) cout << " ";
	else {
		if (num / 3 == 0) cout << "*";
		else rec(i, k, num / 3);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int k = 0; k < num; k++) {
			rec(i, k, num);
		}
		cout << "\n";
	}
}