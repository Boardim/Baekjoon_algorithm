#include <iostream>
using namespace std;
int main() {
	int n, f, ans;
	cin >> n >> f;

	n = n - n % 100;
	for (int i = 0; i < 100; i++) {
		if (n % f == 0) {
			ans = i;
			break;
		}
		n++;
	}
	if (ans < 10) {
		printf("0%d", ans);
	}
	else cout << ans;
}