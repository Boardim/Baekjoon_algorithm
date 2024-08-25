#include <iostream>
using namespace std;

int arr[9];
bool check[9];
int N, M;

void rec(int k) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (!check[i]) {
			arr[k] = i;
			check[i] = true;
			rec(k + 1);
			check[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	rec(0);
}