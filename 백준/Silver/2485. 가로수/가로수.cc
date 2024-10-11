#include <iostream>
using namespace std;

int arr[100000], dis[100000];

int GCD(int x, int y) {
	if (x % y == 0) return y;
	return GCD(y, x%y);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		dis[i - 1] = arr[i] - arr[i - 1];
	}
	int gcd = dis[0];
	for (int i = 1; i < n-1; i++) {
		gcd = GCD(dis[i], gcd);
	}
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		count += dis[i] / gcd - 1;
	}
	cout << count;
}