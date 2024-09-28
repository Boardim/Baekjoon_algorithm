#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];

int fabs(int a) {
	if (a < 0) return -1 * a;
	return a;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	long long int count = 0;
	for (int i = 1; i <= n / 2; i++) {
		int mul = 0;
		if (arr[i] != arr[n - i + 1]) {
			int temp = fabs(arr[n - i + 1] - arr[i]);
			mul = temp / m;
		}
		int temp2 = mul + 1;
		int dif = fabs(arr[n - i + 1] - arr[i]);

		count += min(min(mul + dif - mul * m, temp2 + temp2 * m - dif), dif);
	}
	cout << count;
}