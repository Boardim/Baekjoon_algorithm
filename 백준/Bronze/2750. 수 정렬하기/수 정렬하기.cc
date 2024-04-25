#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,a[1000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a, a + N);
	for (int i = 0; i < N; i++) {
		cout << a[i] << "\n";
	}
}
