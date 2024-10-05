#include <iostream>
using namespace std;

char arr[52][52];

int check(int index1, int index2, int n, int m) {
	int check = 0;
	int i1[6] = { -1,-1,0,0,1,1 };
	int i2Even[6] = { 0,1,-1,1,0,1 };
	int i2Odd[6] = { -1,0,-1,1,-1,0 };
	for (int i = 0; i < 6; i++) {
		int x = index1 + i1[i];
		int y;
		if (index1 % 2 == 0) y = index2 + i2Odd[i];
		else y = index2 + i2Even[i];

		if (x >= 0 && x < n && y >= 0 && y < m) {
			if (arr[x][y] == '.') check++;
		}
	}
	return check;

}

int main() {
	int n, m;
	int sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> arr[i][k];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			if (arr[i][k] == '#') {
				sum += check(i, k, n, m);
			}
		}
	}
	cout << sum;
}