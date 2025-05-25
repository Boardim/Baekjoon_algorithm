#include <iostream>
#include <vector>
using namespace std;

int arr[9];
int n, m;

void backtraking(int start, int cnt) {
	if (m == cnt) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i= start; i <= n; i++) {
			arr[cnt] = i;
			backtraking(i + 1, cnt + 1);
		}
	}
}

int main() {
	cin >> n >> m;
	backtraking(1, 0);
}