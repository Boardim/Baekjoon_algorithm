#include <iostream>
#include <string>
using namespace std;

void ifSame(string a, string b, int count) {
	int temp = -1;
	for (int k = 0; k < a.size(); k++) {
		if (a[k] != b[k]) {
			if (temp != -1) {
				swap(a[k], a[temp]);
				count++;
				temp = -1;
				continue;
			}
			temp = k;
		}
	}
	cout << count << "\n";
}

int main() {
	int T;
	string a, b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		int anum{ 0 };
		int bnum{ 0 };
		int count{ 0 };

		for (int k = 0; k < a.size(); k++) {
			if (a[k] == '1') anum++;
			if (b[k] == '1') bnum++;
		}

		if (anum > bnum) {
			for (int k = 0; k < a.size(); k++) {
				if (a[k] == '1' && b[k] == '0') {
					count++;
					anum--;
					a[k] = '0';
				}
				if (anum == bnum) break;
			}
		}
		if (anum < bnum) {
			for (int k = 0; k < a.size(); k++) {
				if (a[k] == '0' && b[k] == '1') {
					a[k] = '1';
					count++;
					anum++;
				}
				if (anum == bnum) break;
			}
		}
		if (anum == bnum) {
			ifSame(a, b, count);
		}
	}
}